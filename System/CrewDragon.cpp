#include "CrewDragon.h"

CrewDragon::CrewDragon(int cargoAmount, int crewAmount) : DragonSpacecraft{cargoAmount} {
    crew = crewAmount ;
}

int CrewDragon::getCargo(){
    return cargo ;
}

bool CrewDragon::getDockStatus(){
    return dockStatus ;
}

void CrewDragon::setDockStatus(bool d){
    dockStatus = d ;
}