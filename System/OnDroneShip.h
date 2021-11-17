#ifndef GANGOFFIVE_ONDRONESHIP_H
#define GANGOFFIVE_ONDRONESHIP_H

#include "State.h"

// Concrete State participant of State
class OnDroneShip: public State{
public:
    OnDroneShip();
    virtual void getState();
    virtual void handleChange();
    virtual ~OnDroneShip();
};


#endif //GANGOFFIVE_ONDRONESHIP_H
