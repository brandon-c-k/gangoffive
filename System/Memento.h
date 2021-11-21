#ifndef GANGOFFIVE_MEMENTO_H
#define GANGOFFIVE_MEMENTO_H

#include "RocketState.h"
class Memento {
private:
    int altitude ;
    int fuel ;
    DragonSpacecraft* spacecraft ;
    vector<Engine*> engineList;
    RocketState* stage ;

public:
    Memento(int a, int f, DragonSpacecraft* s, vector<Engine*>, e, RocketState* st);
    ~Memento() ;
    int getAltitude() ;
    int getfuel() ;
    DragonSpacecraft* getSpacecraft() ;
    RocketState* getStage() ;
    vector<Engine*> getEngineList() ;

};


#endif //GANGOFFIVE_MEMENTO_H
