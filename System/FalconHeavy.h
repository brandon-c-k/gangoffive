#ifndef GANGOFFIVE_FALCONHEAVY_H
#define GANGOFFIVE_FALCONHEAVY_H

#include "Rocket.h"

class FalconHeavy: public Rocket {
public:
    FalconHeavy();
    FalconHeavy(int);
    virtual void staticFire();
    virtual void launch();
    virtual void firstStage();
    virtual void abort();
    virtual void pause();
    virtual void success();
    virtual void dock(ISS*);
    virtual ~FalconHeavy();
    virtual void reverseState();
};


#endif //GANGOFFIVE_FALCONHEAVY_H
