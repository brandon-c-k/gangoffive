#include "FalconHeavyCreator.h"
#include "CrewDragon.h"

Rocket* FalconHeavyCreator::createRocket(bool crewOrDragon, int crewCount = 0) {
    DragonSpacecraft* spacecraft;

    if (crewOrDragon){
        spacecraft = new CrewDragon(crewCount);
    } else {
        spacecraft = new DragonSpacecraft();
    }
    Rocket* r  = new FalconHeavy(410000);
    r->addSpacecraft(spacecraft);
    return r;
}