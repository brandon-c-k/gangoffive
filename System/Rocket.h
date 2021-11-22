#ifndef GANGOFFIVE_ROCKET_H
#define GANGOFFIVE_ROCKET_H

#include <string>
#include <vector>
#include <iostream>

#include "Engine.h"
#include "ISS.h"
#include "DragonSpacecraft.h"

using namespace std;
class Memento;
class RocketState; //Forward declaration because of circular dependency in state pattern

class Rocket {
public:
    Rocket();
    Rocket(int);
    virtual ~Rocket();
    void resetStage();
    RocketState* getState();
    void setState(RocketState *state);
    void setFuel(int ) ;
    void resetAltitude() ;
    int getAltitude() ;
    int getFuel() ;
    void change();
    std::string getStage();
    virtual void staticFire() = 0;
    virtual void launch()= 0;
    virtual void firstStage() = 0;
    virtual void abort() = 0;
    void reverseState();
    virtual void success() = 0;
    virtual void dock(ISS*) = 0;
    virtual string getType() = 0;
    void addSpacecraft(DragonSpacecraft*) ;
    void notifyEngines();
    void addEngine(Engine *);
    void removeEngine(Engine *);
    DragonSpacecraft* getSpacecraft();
    Memento* createMemento() ;
    void restoreRocket(Memento*) ;
    void setCargoMax(int);
    int getCargoMax();
    void setAltitude(int);
private:
    DragonSpacecraft* spacecraft ;
    RocketState* stage;
    int fuel;
    int altitude ;
    vector<Engine*> engineList;
    int cargoMax;
    int engineCount = 0;
};

#endif //GANGOFFIVE_ROCKET_H
