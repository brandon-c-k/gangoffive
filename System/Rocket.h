#ifndef GANGOFFIVE_ROCKET_H
#define GANGOFFIVE_ROCKET_H
#include <string>
#include "Engine.h"
using namespace std;

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
    void staticFire();
    void launch();
    void firstStage();
    void abort();
    void pause();
    void success();
    void dock();
    void notifyEngines();
    void addEngine(Engine *);
    void removeEngine(Engine *);
private:
    RocketState* stage;
    int fuel;
    int x_coords;
    int y_coords;
    Engine* engineList;
};


#endif //GANGOFFIVE_ROCKET_H
