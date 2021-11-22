#ifndef GANGOFFIVE_MEMENTO_H
#define GANGOFFIVE_MEMENTO_H
#include <vector>
#include "DragonSpacecraft.h"
#include "Engine.h"
#include "Rocket.h"
class RocketState;
class Memento {
private:
    int altitude ;
    int fuel ;
    DragonSpacecraft* spacecraft ;
    std::vector<Engine*> engineList;
    RocketState* stage ;

public:
    Memento(int a, int f, DragonSpacecraft* s, std::vector<Engine*> e, RocketState* st);
    ~Memento() ;
    int getAltitude() ;
    int getFuel();
    DragonSpacecraft* getSpacecraft() ;
    RocketState* getStage() ;
    std::vector<Engine*> getEngineList() ;

};


#endif //GANGOFFIVE_MEMENTO_H
