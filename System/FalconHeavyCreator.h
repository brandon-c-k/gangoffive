#ifndef GANGOFFIVE_FALCONHEAVYCREATOR_H
#define GANGOFFIVE_FALCONHEAVYCREATOR_H

#include "RocketCreator.h"
#include "FalconHeavy.h"


class FalconHeavyCreator: public RocketCreator{
public:
    virtual Rocket* createRocket(bool, int);
};


#endif //GANGOFFIVE_FALCONHEAVYCREATOR_H
