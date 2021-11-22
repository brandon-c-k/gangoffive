#include "MerlinEngine.h"
#include "RocketState.h"
MerlinEngine::MerlinEngine() : Engine(){}

Engine* MerlinEngine::clone() {
    return new MerlinEngine(*this);
}

void MerlinEngine::update() {
    observerState = getRocket()->getState();
    if (observerState)
        if (observerState->getStage() == "Static Fire" ){
            cout<<"Merlin Engine - "<< engineId <<" fires in low power." << endl;
        } else if (observerState->getStage() == "Lift Off!"){
            cout<<"Merlin Engine - " << engineId << " fires at full capacity"<<endl;
        }
}

MerlinEngine::MerlinEngine(const MerlinEngine& c) : Engine(c) {}

std::string MerlinEngine::getName() {
    return "Merlin Engine";
}
