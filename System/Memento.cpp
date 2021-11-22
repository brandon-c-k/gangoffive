#include "Memento.h"

Memento::Memento(int a, int f, DragonSpacecraft* s, std::vector<Engine*> e, RocketState* st){
    altitude = a ;
    fuel = f ;
    spacecraft = s ;
    engineList = e ;
    stage = st ;
}

Memento::~Memento(){
    delete spacecraft ;

    //delete engines
}

int Memento::getAltitude(){
    return altitude ;
}

int Memento::getFuel(){
    return fuel ;
}

DragonSpacecraft* Memento::getSpacecraft(){
    return spacecraft ;
}

RocketState* Memento::getStage(){
    return stage ;
}

std::vector<Engine*> Memento::getEngineList(){
    return engineList ;
}
