#ifndef GANGOFFIVE_REENTRY_H
#define GANGOFFIVE_REENTRY_H

#include "RocketState.h"
// Concrete RocketState participant of RocketState
class Reentry: public RocketState{
public:
    Reentry();
    virtual std::string getStage();
    virtual void handleChange(Rocket *rocket);
    virtual ~Reentry();
};


#endif //GANGOFFIVE_REENTRY_H
