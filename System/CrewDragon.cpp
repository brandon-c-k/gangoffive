#include "CrewDragon.h"

CrewDragon::CrewDragon(int cargoAmount, int crewAmount) : DragonSpacecraft{cargoAmount} {
    crew = crewAmount ;
}

int CrewDragon::getCrew() {
    return crew;
}
