
#include "VacuumEngine.h"
#include "RocketState.h"
VacuumEngine::VacuumEngine() : Engine(){}


Engine* VacuumEngine::clone() {
    return new VacuumEngine(*this);
}

void VacuumEngine::update() {
    observerState = getRocket()->getState();
    if (observerState)
        if (observerState->getStage() == "Static Fire" ){
            cout<<"Vacuum Engine - "<< engineId <<" fires in low power." << endl;
        } else if (observerState->getStage() == "First Stage Released"){
            cout<<"Vacuum Engine - " << engineId << " fires at full capacity"<<endl;
        }
}

VacuumEngine::VacuumEngine(const VacuumEngine& c) : Engine(c) {}

std::string VacuumEngine::getName() {
    return "Vacuum Engine";
}
