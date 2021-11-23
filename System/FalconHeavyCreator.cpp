#include "FalconHeavyCreator.h"
#include "CrewDragon.h"

Rocket* FalconHeavyCreator::createRocket(bool crewOrDragon, int crewCount = 0) {
    DragonSpacecraft* craft;

    if (crewOrDragon){
        craft = new CrewDragon(crewCount);
    } else {
        craft = new DragonSpacecraft();
    }
    Rocket* r  = new FalconHeavy(410000);
    r->addSpacecraft(craft);
    return r;
}