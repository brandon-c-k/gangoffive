#ifndef GANGOFFIVE_FALCON9CREATOR_H
#define GANGOFFIVE_FALCON9CREATOR_H

#include "RocketCreator.h"
#include "Falcon9.h"


class Falcon9Creator: public RocketCreator{
public:
    virtual Rocket* createRocket(bool, int);
};


#endif //GANGOFFIVE_FALCON9CREATOR_H
