#include "Falcon9Creator.h"

Rocket* Falcon9Creator::createFalcon9(int fuel){
    return new Falcon9(fuel);
}