#ifndef GANGOFFIVE_REENTRYFLOP_H
#define GANGOFFIVE_REENTRYFLOP_H

#include "LandingBurn.h"

// Concrete RocketState participant of RocketState
class ReEntryFlop: public RocketState{
public:
    ReEntryFlop();
    virtual std::string getStage();
    virtual void handleChange(Rocket *rocket);
    virtual ~ReEntryFlop();
};


#endif //GANGOFFIVE_REENTRYFLOP_H
