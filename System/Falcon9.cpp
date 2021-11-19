#include "Falcon9.h"
#include "RocketState.h"

Falcon9::Falcon9(int fuel) : Rocket(fuel) {}

Falcon9::~Falcon9() {} 

void Falcon9::staticFire() {
//do some test -> if success, state->handle change
//if failure, option to redo static Fire
}

void Falcon9::launch() {
    if(getState()->getStage() == "On Launch Pad"){
        getState()->handleChange(this) ;                 //changes state to LiftOff
        cout << "Blast off! The Falcon 9 rocket has launched." << endl ;
        notifyEngines() ;
    }
    else{
        cout << "Falcon 9 rocket needs to be on the launch pad to begin launch. Current state: " << getState()->getStage() << endl ;
    }
}

void Falcon9::firstStage() {
    if(getState()->getStage() == "Lift off"){
        getState()->handleChange(this) ;                //changes state to FirstStageDone
        cout << "Falcon 9 rocket detaches its first getState() - which lands on a drone ship in the ocean" << endl ;
        notifyEngines() ;
    } else{
        cout << "Falcon 9 rocket needs to be in lift off to detach its first getState(). Current state: " << getState()->getStage() << endl ;
    }
}

void Falcon9::abort() {
    //need to figure out what to do here
}

void Falcon9::pause() {
    //need to figure out what to do here
}

void Falcon9::success() {
    //return cost and fuel consumption
    if(getState()->getStage() == "Dock"){
        cout<< "Falcon 9 rocket successfully delivered " << getSpacecraft()->getCargo() << " kgs of cargo to the ISS" << endl ;
        getState()->handleChange(this) ;
        notifyEngines() ;
    }else{
        cout << "Falcon 9 needs to have docked before confirming success. Current state: " << getState()->getStage() << endl ;
    }
}

void Falcon9::dock(ISS* spaceStation) {
    if(getState()->getStage() == "Release First"){
        cout<<"Falcon 9 rocket is approaching the ISS." << endl ;
        spaceStation->welcome(this) ;
        getState()->handleChange(this) ;
        notifyEngines() ;

    }else{
        cout << "Falcon 9 needs to have detached its first getState() in order to dock. Current state: " << getState()->getStage() << endl ;
    }
}

Falcon9::Falcon9() {

}

void Falcon9::reverseState() {

}
