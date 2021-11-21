#include "MerlinEngine.h"

MerlinEngine::MerlinEngine() : Engine(){}

Engine* MerlinEngine::clone() {
    return new MerlinEngine(*this);
}

void MerlinEngine::update() {
    //observerState = rocket->getState();
}

MerlinEngine::MerlinEngine(const MerlinEngine& c) : Engine(c) {}