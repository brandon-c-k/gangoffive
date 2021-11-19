#include "FalconHeavy.h"

FalconHeavy::FalconHeavy(int fuel) : Rocket{fuel} {}

FalconHeavy::~FalconHeavy() {} 

void FalconHeavy::staticFire() {
//do some test -> if success, state->handle change
//if failure, option to redo static Fire
}

void FalconHeavy::launch() {
    if(stage->getStage() == "On Launch Pad"){
        stage->handleChange() ;                 //changes state to LiftOff
        cout << "Blast off! The Falcon Heavy rocket has launched." << endl ;
        notifyEngines() ;
    }
    else{
        cout << "Falcon Heavy rocket needs to be on the launch pad to begin launch. Current state: " << state->getStage() << endl ;
    }
}

void FalconHeavy::firstStage() {
    if(stage->getStage() == "Lift off"){
        stage->handleChange() ;                //changes state to FirstStageDone
        cout << "Falcon Heavy rocket detaches its first stage - which lands on a drone ship in the ocean" << endl ;
        notifyEngines() ;
    } else{
        cout << "Falcon Heavy rocket needs to be in lift off to detach its first stage. Current state: " << state->getStage() << endl ;
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
    if(stage->getStage() == "Release First"){
        cout<<"Falcon Heavy rocket is approaching the ISS." << endl ;
        spaceStation->welcome(this) ;
        stage->handleChange() ;
        notifyEngines() ;

    }else{
        cout << "Falcon Heavy needs to have detached its first stage in order to dock. Current state: " << state->getStage() << endl ;
    }
}