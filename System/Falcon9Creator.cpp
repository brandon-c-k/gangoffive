#include "Falcon9Creator.h"
#include "CrewDragon.h"

Rocket* Falcon9Creator::createRocket(bool crewOrDragon, int crewCount = 0) {
    DragonSpacecraft* spacecraft;
    if (crewOrDragon){
        spacecraft = new CrewDragon(crewCount);
    } else {
        spacecraft = new DragonSpacecraft();
    }
    Rocket* r =  new Falcon9(75200);
    r->addSpacecraft(spacecraft);
    return r;
}