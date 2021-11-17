#ifndef GANGOFFIVE_LANDINGBURN_H
#define GANGOFFIVE_LANDINGBURN_H

#include "RocketState.h"
// Concrete RocketState participant of RocketState
class LandingBurn: public RocketState{
public:
    LandingBurn();
    virtual std::string getStage();
    virtual void handleChange(Rocket *rocket);
    virtual ~LandingBurn();
};


#endif //GANGOFFIVE_LANDINGBURN_H
