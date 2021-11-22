#include "Engine.h"
#include "RocketState.h"

Engine::Engine(){

}

Engine::~Engine(){
    delete observerState;
}

int Engine::getID() {
    return engineId;
}

void Engine::setID(int i){
    engineId = i ;
}


Engine::Engine(const Engine& c){

}

void Engine::setRocket(Rocket *r) {
    rocket = r;
}

Rocket *Engine::getRocket() {
    return rocket;
}
