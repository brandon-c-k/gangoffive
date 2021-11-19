#include "DockingStation.h"
#include "Rocket.h"

DockingStation::DockingStation() {}

DockingStation::~DockingStation(){}

void DockingStation::accept(Rocket* r){
    cout << "Docking Station accepts arrival of rocket" << endl ;
}