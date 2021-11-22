#include "CrewDragon.h"

CrewDragon::CrewDragon(int crewAmount, int cargoAmount) : DragonSpacecraft(cargoAmount) {
    crew = crewAmount ;
    setCrewShip(true) ;
}

int CrewDragon::getCrew() {
    return crew;
}

void CrewDragon::setCrew(int c){
    crew = c ;
}

std::string CrewDragon::getName() {
    return "Crew Dragon";
}
