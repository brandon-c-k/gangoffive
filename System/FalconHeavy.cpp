#include "FalconHeavy.h"
#include "RocketState.h"
FalconHeavy::FalconHeavy(int fuel) : Rocket(fuel) {}

FalconHeavy::~FalconHeavy() {} 

void FalconHeavy::staticFire() {
//do some test -> if success, state->handle change
//if failure, option to redo static Fire
}

void FalconHeavy::launch() {
    if(getState()->getStage() == "On Launch Pad"){
        getState()->handleChange(this) ;                 //changes state to LiftOff
        cout << "Blast off! The Falcon Heavy rocket has launched." << endl ;
        notifyEngines() ;
    }
    else{
        cout << "Falcon Heavy rocket needs to be on the launch pad to begin launch. Current state: " << getState()->getStage() << endl ;
    }
}

void FalconHeavy::firstStage() {
    if(getState()->getStage() == "Lift off"){
        getState()->handleChange(this) ;                //changes state to FirstStageDone
        cout << "Falcon Heavy rocket detaches its first stage - which lands on a drone ship in the ocean" << endl ;
        notifyEngines() ;
    } else{
        cout << "Falcon Heavy rocket needs to be in lift off to detach its first stage. Current state: " << getState()->getStage() << endl ;
    }
}

void FalconHeavy::abort() {
    //need to figure out what to do here
}

void FalconHeavy::pause() {
    //need to figure out what to do here
}

void FalconHeavy::success() {
    //return cost and fuel consumption
}

void FalconHeavy::dock(ISS* spaceStation) {
    //integrate with visitor design pattern
    if(getState()->getStage() == "Release First"){
        cout<<"Falcon Heavy rocket is approaching the ISS." << endl ;
        spaceStation->welcome(this) ;
        getState()->handleChange(this) ;
        notifyEngines() ;

    }else{
        cout << "Falcon Heavy needs to have detached its first stage in order to dock. Current state: " << getState()->getStage() << endl ;
    }
}

FalconHeavy::FalconHeavy() {

}

void FalconHeavy::reverseState() {

}
