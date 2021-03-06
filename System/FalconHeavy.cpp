#include "FalconHeavy.h"
#include "RocketState.h"
#include "CrewDragon.h"
#include "MerlinEngine.h"
#include "VacuumEngine.h"

FalconHeavy::FalconHeavy(int fuel) : Rocket(fuel) {
    setCargoMax(63800);
    //Add Single vacuum engine to rocket
    VacuumEngine* eVacuum = new VacuumEngine();
    addEngine(eVacuum->clone());

    //Add 9 Merlin engines to rocket
    MerlinEngine* eMirlin = new MerlinEngine();
    for (int i = 0 ; i < 27 ; i ++ )
        addEngine(eMirlin->clone());

    //delete local stack variables after use
    delete eMirlin;
    delete eVacuum;

}

FalconHeavy::~FalconHeavy() {} 

void FalconHeavy::staticFire() {
    notifyEngines() ;
    getState()->handleChange(this) ;
    cout << "Falcon Heavy passes static fire test - engines firing as needed" << endl ;
    setFuel((int) getFuel()*0.95);
    cout << "Altitude: " << getAltitude() << " km" << endl ;
    cout << "Fuel remaining: " << getFuel() << " litres" << endl ;


}

void FalconHeavy::launch() {
    if(getState()->getStage() == "On Launch Pad"){
        getState()->handleChange(this) ;                 //changes state to LiftOff
        cout << "Blast off! The Falcon Heavy rocket has launched.  Merlin Engines are firing" << endl ;

        setAltitude(getAltitude() + 3000);
        setFuel((int) getFuel()*0.80);

        cout << "Altitude: " << getAltitude() << " km" << endl ;
        cout << "Fuel remaining: " << getFuel() << " litres" << endl ;
        notifyEngines() ;
    }
    else{
        cout << "Falcon Heavy rocket needs to be on the launch pad to begin launch. Current state: " << getState()->getStage() << endl ;
    }
}

void FalconHeavy::firstStage() {
    if(getState()->getStage() == "Lift Off!"){
        getState()->handleChange(this) ;                //changes state to FirstStageDone
        cout << "Falcon Heavy rocket detaches its first stage - which lands on a drone ship in the ocean" << endl ;
        cout << "Second stage ignition. Vacuum Engine firing." << endl ;

        setAltitude(getAltitude() + 3000);
        setFuel((int) getFuel()*0.90);

        cout << "Altitude: " << getAltitude() << " km" << endl ;
        cout << "Fuel remaining: " << getFuel() << " litres" << endl ;
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
            cout<< " and " << dynamic_cast<CrewDragon*>(getSpacecraft())->getCrew() << " crew members" ;
        
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
        setAltitude(getAltitude() + 3000);
        setFuel((int) getFuel()*0.90);

        cout << "Altitude: " << getAltitude() << " km" << endl ;
        cout << "Fuel remaining: " << getFuel() << " litres" << endl ;
        spaceStation->welcome(this) ;
        getState()->handleChange(this) ;
        notifyEngines() ;

    }else{
        cout << "Falcon Heavy needs to have detached its first getState() in order to dock. Current state: " << getState()->getStage() << endl ;
    }
}

FalconHeavy::FalconHeavy() {

}


string FalconHeavy::getType() {
    return "Falcon Heavy";
}

