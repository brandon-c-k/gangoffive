#include "FalconHeavy.h"

FalconHeavy::FalconHeavy(int fuel) : Rocket{fuel} {}

FalconHeavy::~FalconHeavy() {} 

virtual void FalconHeavy::staticFire() {
//do some test -> if success, state->handle change
//if failure, option to redo static Fire
}

virtual void FalconHeavy::launch() {
    if(stage->getStage() == "On Launch Pad"){
        stage->handleChange() ;                 //changes state to LiftOff
        cout << "Blast off! The Falcon Heavy rocket has launched." << endl ;
        notifyEngines() ;
    }
    else{
        cout << "Falcon Heavy rocket needs to be on the launch pad to begin launch. Current state: " << state->getStage() << endl ;
    }
}

virtual void FalconHeavy::firstStage() {
    if(stage->getStage() == "Lift off"){
        stage->handleChange() ;                //changes state to FirstStageDone
        cout << "Falcon Heavy rocket detaches its first stage - which lands on a drone ship in the ocean" << endl ;
        notifyEngines() ;
    } else{
        cout << "Falcon Heavy rocket needs to be in lift off to detach its first stage. Current state: " << state->getStage() << endl ;
    }
}

virtual void FalconHeavy::abort() {
    //need to figure out what to do here
}

virtual void FalconHeavy::pause() {
    //need to figure out what to do here
}

virtual void FalconHeavy::success() {
    //return cost and fuel consumption
}

virtual void FalconHeavy::dock() {
    //integrate with visitor design pattern
}