#include "Falcon9.h"
#include "Reentry.h"
#include "MerlinEngine.h"
#include "VacuumEngine.h"


Falcon9::Falcon9(int fuel) : Rocket(fuel) {
    setCargoMax(22800);
    //Add Single vacuum engine to rocket
    VacuumEngine* eVacuum = new VacuumEngine();
    addEngine(eVacuum->clone());

    //Add 9 Merlin engines to rocket
    MerlinEngine* eMerlin = new MerlinEngine();

    for (int i = 0 ; i < 9 ; i++)
        addEngine(eMerlin->clone());

    //delete local stack variables after use
    delete eMerlin;
    delete eVacuum;
}

Falcon9::~Falcon9() {} 

void Falcon9::staticFire() {
    notifyEngines() ;

    getState()->handleChange(this) ;
    cout << "Falcon 9 passes static fire test - engines firing as needed" << endl ;

    setFuel((int) getFuel()*0.95);
    cout << "Altitude: " << getAltitude() << " km" << endl ;
    cout << "Fuel remaining: " << getFuel() << " litres" << endl ;

}

void Falcon9::launch() {
    if(getState()->getStage() == "On Launch Pad"){
        getState()->handleChange(this) ;                 //changes state to LiftOff
        cout << "Blast off! The Falcon 9 rocket has launched. Merlin Engines are firing" << endl ;
        setAltitude(getAltitude() + 3000);
        setFuel((int) getFuel()*0.80);

        cout << "Altitude: " << getAltitude() << " km" << endl ;
        cout << "Fuel remaining: " << getFuel() << " litres" << endl ;
        notifyEngines() ;
    }
    else{
        cout << "Falcon 9 rocket needs to be on the launch pad to begin launch. Current state: " << getState()->getStage() << endl ;
    }
}

void Falcon9::firstStage() {
    if(getState()->getStage() == "Lift Off!"){
        getState()->handleChange(this) ;                //changes state to FirstStageDone
        cout << "Falcon 9 rocket detaches its first stage - which lands on a drone ship in the ocean" << endl ;
        cout << "Second stage ignition. Vacuum Engine firing." << endl ;
        setAltitude(getAltitude() + 3000);
        setFuel((int) getFuel()*0.90);

        cout << "Altitude: " << getAltitude() << " km" << endl ;
        cout << "Fuel remaining: " << getFuel() << " litres" << endl ;
        notifyEngines() ;
        if (getSatellites()){
            cout << "Falcon 9 releases it's satellites."<< endl;
            this->setState(new Reentry());
        }
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
        setAltitude(getAltitude() + 3000);
        setFuel((int) getFuel()*0.90);

        cout << "Altitude: " << getAltitude() << " km" << endl ;
        cout << "Fuel remaining: " << getFuel() << " litres" << endl ;
        spaceStation->welcome(this) ;
        getState()->handleChange(this) ;
        notifyEngines() ;

    }else{
        cout << "Falcon 9 needs to have detached its first getState() in order to dock. Current state: " << getState()->getStage() << endl ;
    }
}

Falcon9::Falcon9() {

}

void Falcon9::setSatellites(bool s) {
    satellites = s;
}

bool Falcon9::getSatellites() {
    return satellites;
}

string Falcon9::getType() {
    return "Falcon 9";
}


