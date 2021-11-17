#ifndef GANGOFFIVE_LIFTOFF_H
#define GANGOFFIVE_LIFTOFF_H

#include "MainStage.h"

// Concrete RocketState participant of RocketState
class LiftOff: public RocketState{
public:
    LiftOff();
    virtual std::string getStage();
    virtual void handleChange(Rocket *rocket);
    virtual ~LiftOff();
};


#endif //GANGOFFIVE_LIFTOFF_H
