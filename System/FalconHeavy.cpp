#include "FalconHeavy.h"
#include "RocketState.h"
FalconHeavy::FalconHeavy(int fuel) : Rocket(fuel) {}

FalconHeavy::~FalconHeavy() {} 

void FalconHeavy::staticFire() {

    getState()->handleChange(this) ;
    cout << "Falcon Heavy passes static fire test - engines firing as needed" << endl ;
    cout << "Altitude: " << altitude << " km" << endl ;
    cout << "Fuel remaining: " << fuel << " litres" << endl ;
    notifyEngines() ;

}

void FalconHeavy::launch() {
    if(getState()->getStage() == "On Launch Pad"){
        getState()->handleChange(this) ;                 //changes state to LiftOff
        cout << "Blast off! The Falcon Heavy rocket has launched.  Merlin Engines are firing" << endl ;

        altitude = altitude + 30 ;
        //decrease fuel

        cout << "Altitude: " << altitude << " km" << endl ;
        cout << "Fuel remaining: " << fuel << " litres" << endl ;
        notifyEngines() ;
    }
    else{
        cout << "Falcon Heavy rocket needs to be on the launch pad to begin launch. Current state: " << getState()->getStage() << endl ;
    }
}

void FalconHeavy::firstStage() {
    if(getState()->getStage() == "Lift off!"){
        getState()->handleChange(this) ;                //changes state to FirstStageDone
        cout << "Falcon Heavy rocket detaches its first stage - which lands on a drone ship in the ocean" << endl ;
        cout << "Second stage ignition. Vacuum Engine firing." << endl ;

        altitude = altitude + 30 ;
        //decrease fuel

        cout << "Altitude: " << altitude << " km" << endl ;
        cout << "Fuel remaining: " << fuel << " litres" << endl ;
        notifyEngines() ;
    } else{
        cout << "Falcon Heavy rocket needs to be in lift off to detach its first stage. Current state: " << getState()->getStage() << endl ;
    }
}

void FalconHeavy::abort() {
    //need to figure out what to do here
}

void FalconHeavy::success() {
    //return cost and fuel consumption
    if(getState()->getStage() == "Docked"){
        cout<< "Falcon Heavy rocket successfully delivered " << getSpacecraft()->getCargo() << " kgs of cargo" ;
        if(getSpacecraft()->hasCrew())
            cout<< " and " << getSpacecraft()->getCrew() << " crew members" ;
        
        cout << " to the ISS" << endl ;
        getState()->handleChange(this) ;
        notifyEngines() ;
    }else{
        cout << "Falcon Heavy needs to have docked before confirming success. Current state: " << getState()->getStage() << endl ;
    }
}

void FalconHeavy::dock(ISS* spaceStation) {
    if(getState()->getStage() == "First Stage Released"){
        cout<<"Falcon Heavy rocket is approaching the ISS." << endl ;
        altitude = altitude + 30 ;
        //decrease fuel

        cout << "Altitude: " << altitude << " km" << endl ;
        cout << "Fuel remaining: " << fuel << " litres" << endl ;
        spaceStation->welcome(this) ;
        getState()->handleChange(this) ;
        notifyEngines() ;

    }else{
        cout << "Falcon Heavy needs to have detached its first getState() in order to dock. Current state: " << getState()->getStage() << endl ;
    }
}

FalconHeavy::FalconHeavy() {

}

void FalconHeavy::reverseState() {
    Rocket::reverseState();
}

