
#ifndef GANGOFFIVE_VACUUMENGINE_H
#define GANGOFFIVE_VACUUMENGINE_H
#include "Engine.h"
class VacuumEngine: public Engine{
public:
    VacuumEngine();
    virtual Engine* clone();
    virtual void update();
    virtual std::string getName();

protected:
    VacuumEngine(const VacuumEngine&);
};


#endif //GANGOFFIVE_VACUUMENGINE_H
