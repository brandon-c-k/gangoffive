#ifndef GANGOFFIVE_ONLAUNCHSITE_H
#define GANGOFFIVE_ONLAUNCHSITE_H

#include "State.h"

// Concrete State participant of State

class OnLaunchSite: public State{
public:
    OnLaunchSite();
    virtual void getState();
    virtual void handleChange();
    virtual ~OnLaunchSite();
};


#endif //GANGOFFIVE_ONLAUNCHSITE_H
