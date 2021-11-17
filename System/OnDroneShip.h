#ifndef GANGOFFIVE_ONDRONESHIP_H
#define GANGOFFIVE_ONDRONESHIP_H

#include "RocketState.h"

/*
    Not sure what to do with this one, since the whole rocket
    doesn't land on the drone ship, and it happens in between other stages
*/

// Concrete RocketState participant of RocketState
class OnDroneShip: public RocketState{
public:
    OnDroneShip();
    virtual std::string getStage();
    virtual void handleChange(Rocket *rocket);
    virtual ~OnDroneShip();
};


#endif //GANGOFFIVE_ONDRONESHIP_H
