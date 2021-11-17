#ifndef GANGOFFIVE_SECONDSTAGE_H
#define GANGOFFIVE_SECONDSTAGE_H

#include "State.h"

// Concrete State participant of State
class SecondStage: public State{
public:
    SecondStage();
    virtual void getState();
    virtual void handleChange();
    virtual ~SecondStage();
};


#endif //GANGOFFIVE_SECONDSTAGE_H
