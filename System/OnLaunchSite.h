#ifndef GANGOFFIVE_ONLAUNCHSITE_H
#define GANGOFFIVE_ONLAUNCHSITE_H

#include "LiftOff.h"

// Concrete RocketState participant of RocketState

class OnLaunchSite: public RocketState {
public:
    OnLaunchSite();
    virtual std::string getStage();
    virtual void handleChange(Rocket *rocket);
    virtual ~OnLaunchSite();
};


#endif //GANGOFFIVE_ONLAUNCHSITE_H
