#ifndef GANGOFFIVE_STATICFIRE_H
#define GANGOFFIVE_STATICFIRE_H

#include "State.h"

// Concrete State participant of State
class StaticFire: public State{
public:
    StaticFire();
    virtual void handleChange();
    virtual void getState();
    virtual ~StaticFire();
};


#endif //GANGOFFIVE_STATICFIRE_H
