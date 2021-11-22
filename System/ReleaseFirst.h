#ifndef GANGOFFIVE_RELEASEFIRST_H
#define GANGOFFIVE_RELEASEFIRST_H

#include "Dock.h"

// Concrete RocketState participant of RocketState
class ReleaseFirst: public RocketState{
public:
    ReleaseFirst();
    virtual std::string getStage();
    virtual void handleChange(Rocket *rocket);
    virtual ~ReleaseFirst();
};


#endif //GANGOFFIVE_RELEASEFIRST_H
