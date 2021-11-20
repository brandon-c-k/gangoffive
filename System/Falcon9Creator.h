#ifndef GANGOFFIVE_FALCON9CREATOR_H
#define GANGOFFIVE_FALCON9CREATOR_H

#include "RocketCreator.h"
#include "Falcon9.h"


class Falcon9Creator: public RocketCreator{
public:
    Rocket* createFalcon9(int); 
};


#endif //GANGOFFIVE_FALCON9CREATOR_H
