
#ifndef GANGOFFIVE_ROCKETCREATOR_H
#define GANGOFFIVE_ROCKETCREATOR_H
#include "Rocket.h"

class RocketCreator {
public:
    virtual Rocket* createFalconHeavy( ) = 0;

    virtual Rocket* createFalcon9() = 0;

    virtual ~RocketCreator(){}

    RocketCreator(){}
};


#endif //GANGOFFIVE_ROCKETCREATOR_H
