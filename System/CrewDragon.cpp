#include "CrewDragon.h"

CrewDragon::CrewDragon(int cargoAmount, int crewAmount) : DragonSpacecraft{cargoAmount} {
    crew = crewAmount ;
    setCrewShip(true) ;
}

int CrewDragon::getCrew() {
    return crew;
}

void CrewDragon::setCrew(int c){
    crew = c ;
}
