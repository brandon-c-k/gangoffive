#ifndef GANGOFFIVE_LIFTOFF_H
#define GANGOFFIVE_LIFTOFF_H

#include "State.h"

// Concrete State participant of State
class LiftOff: public State{
public:
    LiftOff();
    virtual void getState();
    virtual void handleChange();
    virtual ~LiftOff();
};


#endif //GANGOFFIVE_LIFTOFF_H
