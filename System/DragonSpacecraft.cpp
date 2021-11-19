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