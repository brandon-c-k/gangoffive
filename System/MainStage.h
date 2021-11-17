#ifndef GANGOFFIVE_MAINSTAGE_H
#define GANGOFFIVE_MAINSTAGE_H

#include "SecondStage.h"

// Concrete RocketState participant of RocketState
class MainStage: public RocketState{
public:
    MainStage();
    virtual void handleChange(Rocket *rocket);
    virtual std::string getStage();
    virtual ~MainStage();
};


#endif //GANGOFFIVE_MAINSTAGE_H
