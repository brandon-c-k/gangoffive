
#ifndef GANGOFFIVE_VACUUMENGINE_H
#define GANGOFFIVE_VACUUMENGINE_H
#include "Engine.h"
#include "Rocket.h"
class VacuumEngine: public Engine{
public:
    virtual void update();
    virtual void clone(Engine *);
private:
    Rocket* rocket;
};


#endif //GANGOFFIVE_VACUUMENGINE_H
