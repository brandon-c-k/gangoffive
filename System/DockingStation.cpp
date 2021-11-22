#include "DockingStation.h"

DockingStation::DockingStation() {}

DockingStation::~DockingStation(){}

void DockingStation::accept(Rocket* r){
    std::cout << "Docking Station accepts arrival of rocket" << std::endl ;
    dockedRocket = r;
}