#ifndef GANGOFFIVE_MERLINENGINE_H
#define GANGOFFIVE_MERLINENGINE_H
#include "Rocket.h"
#include "Engine.h"
class MerlinEngine: public Engine{
public:    
    MerlinEngine();
    virtual Engine* clone();
    virtual void update();

private:
    Rocket* rocket;

protected:
    MerlinEngine(const MerlinEngine&);
};


#endif //GANGOFFIVE_MERLINENGINE_H
