#ifndef GANGOFFIVE_DOCK_H
#define GANGOFFIVE_DOCK_H

#include "Reentry.h"

// Concrete RocketState participant of RocketState
class Dock: public RocketState{
public:
    Dock();
    virtual std::string getStage();
    virtual void handleChange(Rocket *rocket);
    virtual ~Dock();
};


#endif //GANGOFFIVE_DOCK_H
