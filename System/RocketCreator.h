
#ifndef GANGOFFIVE_ROCKETCREATOR_H
#define GANGOFFIVE_ROCKETCREATOR_H
#include "Rocket.h"

class RocketCreator {
public:
    virtual Rocket* createRocket(bool, int a = 0) = 0;

    virtual ~RocketCreator(){}

    RocketCreator(){}
};


#endif //GANGOFFIVE_ROCKETCREATOR_H
