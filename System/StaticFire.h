#ifndef GANGOFFIVE_STATICFIRE_H
#define GANGOFFIVE_STATICFIRE_H

#include "RocketState.h"
#include "OnLaunchSite.h"

// Concrete RocketState participant of RocketState
class StaticFire: public RocketState {
public:
    StaticFire();
    virtual void handleChange(Rocket *rocket);
    virtual std::string getStage();
    virtual ~StaticFire();
};


#endif //GANGOFFIVE_STATICFIRE_H
