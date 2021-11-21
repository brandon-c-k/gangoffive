#ifndef GANGOFFIVE_MERLINENGINE_H
#define GANGOFFIVE_MERLINENGINE_H
#include "Rocket.h"
#include "Engine.h"
class MerlinEngine: public Engine{
    virtual void update();
    virtual Engine* clone();

private:
    Rocket* rocket;
};


#endif //GANGOFFIVE_MERLINENGINE_H
