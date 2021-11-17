#ifndef GANGOFFIVE_LANDINGBURN_H
#define GANGOFFIVE_LANDINGBURN_H

#include "State.h"
// Concrete State participant of State
class LandingBurn: public State{
public:
    LandingBurn();
    virtual void getState();
    virtual void handleChange();
    virtual ~LandingBurn();
};


#endif //GANGOFFIVE_LANDINGBURN_H
