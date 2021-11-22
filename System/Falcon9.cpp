#include "Falcon9.h"
#include "RocketState.h"

Falcon9::Falcon9(int fuel) : Rocket(fuel) {}

Falcon9::~Falcon9() {} 

void Falcon9::staticFire() {

    getState()->handleChange(this) ;
    cout << "Falcon 9 passes static fire test - engines firing as needed" << endl ;
    cout << "Altitude: " << altitude << " km" << endl ;
    cout << "Fuel remaining: " << fuel << " litres" << endl ;
    notifyEngines() ;

}

void Falcon9::launch() {
    if(getState()->getStage() == "On Launch Pad"){
        getState()->handleChange(this) ;                 //changes state to LiftOff
        cout << "Blast off! The Falcon 9 rocket has launched. Merlin Engines are firing" << endl ;
        altitude = altitude + 30 ;
        //decrease fuel

        cout << "Altitude: " << altitude << " km" << endl ;
        cout << "Fuel remaining: " << fuel << " litres" << endl ;
        notifyEngines() ;
    }
    else{
        cout << "Falcon 9 rocket needs to be on the launch pad to begin launch. Current state: " << getState()->getStage() << endl ;
    }
}

void Falcon9::firstStage() {
    if(getState()->getStage() == "Lift off!"){
        getState()->handleChange(this) ;                //changes state to FirstStageDone
        cout << "Falcon 9 rocket detaches its first stage - which lands on a drone ship in the ocean" << endl ;
        cout << "Second stage ignition. Vacuum Engine firing." << endl ;
        altitude = altitude + 30 ;
        //decrease fuel

        cout << "Altitude: " << altitude << " km" << endl ;
        cout << "Fuel remaining: " << fuel << " litres" << endl ;
        notifyEngines() ;
    } else{
        cout << "Falcon 9 rocket needs to be in lift off to detach its first getState(). Current state: " << getState()->getStage() << endl ;
    }
}

void Falcon9::abort() {
    //need to figure out what to do here
}

void Falcon9::success() {
    //return cost and fuel consumption
    if(getState()->getStage() == "Docked"){
        cout<< "Falcon 9 rocket successfully delivered " << getSpacecraft()->getCargo() << " kgs of cargo to the ISS" << endl ;
        getState()->handleChange(this) ;
        notifyEngines() ;
    }else{
        cout << "Falcon 9 needs to have docked before confirming success. Current state: " << getState()->getStage() << endl ;
    }
}

void Falcon9::dock(ISS* spaceStation) {
    if(getState()->getStage() == "First Stage Released"){
        cout<<"Falcon 9 rocket is approaching the ISS." << endl ;
        altitude = altitude + 30 ;
        //decrease fuel

        cout << "Altitude: " << altitude << " km" << endl ;
        cout << "Fuel remaining: " << fuel << " litres" << endl ;
        spaceStation->welcome(this) ;
        getState()->handleChange(this) ;
        notifyEngines() ;

    }else{
        cout << "Falcon 9 needs to have detached its first getState() in order to dock. Current state: " << getState()->getStage() << endl ;
    }
}

Falcon9::Falcon9() {

}

