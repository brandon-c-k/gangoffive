#ifndef GANGOFFIVE_ROCKET_H
#define GANGOFFIVE_ROCKET_H
#include <string>
#include <vector>
#include <iostream>
#include "Engine.h"
#include "ISS.h"

class RocketState; //Forward declaration because of circular dependency in state pattern

class Rocket {
public:
    Rocket();
    ~Rocket();
    void resetStage();
    RocketState* getState();
    void setState(RocketState *state);
    void change();
    std::string getStage();
    virtual void staticFire() = 0;
    virtual void launch()= 0;
    virtual void firstStage() = 0;
    virtual void abort() = 0;
    virtual void reverseState() = 0;
    virtual void success() = 0;
    virtual void dock(ISS*) = 0;
    void addSpacecraft(DragonSpacecraft*) ;
    void notifyEngines();
    void addEngine(Engine *);
    void removeEngine(Engine *);
private:
    RocketState* stage;
    DragonSpacecraft* spacecraft ;
    int fuel;
    int x_coords;
    int y_coords;
    vector<Engine*> engineList;
};


#endif //GANGOFFIVE_ROCKET_H
