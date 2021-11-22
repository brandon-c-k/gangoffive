
#ifndef GANGOFFIVE_ROCKETCREATOR_H
#define GANGOFFIVE_ROCKETCREATOR_H
#include "Rocket.h"

class RocketCreator {
public:
    virtual Rocket* createFalconHeavy(int) = 0;

    virtual Rocket* createFalcon9(int) = 0;

    virtual ~RocketCreator(){}

    RocketCreator(){}
};


#endif //GANGOFFIVE_ROCKETCREATOR_H
