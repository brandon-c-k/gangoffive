#ifndef GANGOFFIVE_SECONDSTAGE_H
#define GANGOFFIVE_SECONDSTAGE_H

#include "ReEntryFlop.h"

// Concrete RocketState participant of RocketState
class SecondStage: public RocketState{
public:
    SecondStage();
    virtual std::string getStage();
    virtual void handleChange(Rocket *rocket);
    virtual ~SecondStage();
};


#endif //GANGOFFIVE_SECONDSTAGE_H
