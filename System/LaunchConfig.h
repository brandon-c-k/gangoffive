#ifndef GANGOFFIVE_LAUNCHCONFIG_H
#define GANGOFFIVE_LAUNCHCONFIG_H

#include "Memento.h"
#include "RocketCreator.h"


class LaunchConfig {
private:
    RocketState* state;
    Rocket* rocket;
    RocketCreator* rocketBuilder;
public:
    Memento* createMemento();
    Memento* restoreMemento(Memento*);
    void assembleSpaceCraft();


};


#endif //GANGOFFIVE_LAUNCHCONFIG_H
