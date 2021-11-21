
#ifndef GANGOFFIVE_ENGINE_H
#define GANGOFFIVE_ENGINE_H

#include "RocketState.h"

class Engine {
public:
    virtual void update() =0;
    virtual Engine* clone() = 0;
    int getID() ;
    void setID(int) ;
    Engine();
    ~Engine();

protected:
    Engine(const Engine&);
    RocketState* observerState;
    int engineId;
    static int counter;
};


#endif //GANGOFFIVE_ENGINE_H
