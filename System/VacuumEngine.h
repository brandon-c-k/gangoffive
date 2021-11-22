
#ifndef GANGOFFIVE_VACUUMENGINE_H
#define GANGOFFIVE_VACUUMENGINE_H
#include "Engine.h"
#include "Rocket.h"
class VacuumEngine: public Engine{
public:
    VacuumEngine();
    virtual Engine* clone();
    virtual void update();

private:
    Rocket* rocket;

protected:
    VacuumEngine(const VacuumEngine&);
};


#endif //GANGOFFIVE_VACUUMENGINE_H
