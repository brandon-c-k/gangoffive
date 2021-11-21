
#include "VacuumEngine.h"

VacuumEngine::VacuumEngine() : Engine(){}


Engine* VacuumEngine::clone() {
    return new VacuumEngine(*this);
}

void VacuumEngine::update() {
observerState = rocket->getState();
}

VacuumEngine::VacuumEngine(const VacuumEngine& c) : Engine(c) {}