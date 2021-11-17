#ifndef GANGOFFIVE_ROCKETSTATE_H
#define GANGOFFIVE_ROCKETSTATE_H

#include <string>
#include "Rocket.h"

//Abstract class of the state participant of state
class RocketState {
public:
    RocketState();
    virtual void handleChange(Rocket *rocket) = 0;
    virtual std::string getStage() =0;
    virtual ~RocketState();
};


#endif //GANGOFFIVE_ROCKETSTATE_H
