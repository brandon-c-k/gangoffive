#ifndef GANGOFFIVE_REENTRYFLOP_H
#define GANGOFFIVE_REENTRYFLOP_H

#include "State.h"

// Concrete State participant of State
class ReEntryFlop: public State{
public:
    ReEntryFlop();
    virtual void getState();
    virtual void handleChange();
    virtual ~ReEntryFlop();
};


#endif //GANGOFFIVE_REENTRYFLOP_H
