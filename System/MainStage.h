#ifndef GANGOFFIVE_MAINSTAGE_H
#define GANGOFFIVE_MAINSTAGE_H

#include "State.h"

// Concrete State participant of State
class MainStage: public State{
public:
    MainStage();
    virtual void handleChange();
    virtual void getState();
    virtual ~MainStage();
};


#endif //GANGOFFIVE_MAINSTAGE_H
