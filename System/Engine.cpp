#include "Engine.h"

int Engine::counter = 0;

Engine::Engine(){
    counter++;
    engineId = counter;
}

Engine::~Engine(){
    delete observerState;
}

int Engine::getID() {
    return engineId;
}

<<<<<<< HEAD
void Engine::setID(int i){
    engineId = i ;
}
=======
void Engine::setID(int x) {
    engineId = x;
}

Engine::Engine(const Engine& c){
    counter++;
    this->engineId = counter;
}
>>>>>>> Engines
