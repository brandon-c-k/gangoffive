#include "FalconHeavyCreator.h"

Rocket* FalconHeavyCreator::createFalconHeavy(int fuel){
    return new FalconHeavy(fuel);
}