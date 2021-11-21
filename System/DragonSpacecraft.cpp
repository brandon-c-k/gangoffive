#include "DragonSpacecraft.h"

DragonSpacecraft::DragonSpacecraft(int c){
    dockStatus = false ;
    cargo = c ;
}

int DragonSpacecraft::getCargo(){
    return cargo ;
}

bool DragonSpacecraft::getDockStatus(){
    return dockStatus ;
}

void DragonSpacecraft::setDockStatus(bool d){
    dockStatus = d ;
}

bool DragonSpacecraft::hasCrew(){
    return crewShip; 
}

void DragonSpacecraft::setCrewShip(bool c) {
    this->crewShip = c;
}

DragonSpacecraft::~DragonSpacecraft() {

}
