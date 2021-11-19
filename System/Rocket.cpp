
#include "Rocket.h"
#include "StaticFire.h"
Rocket::Rocket(int f) {
    this->stage = new StaticFire();
    this->fuel = f ;
}

Rocket::~Rocket() {
    delete this->stage;
}

void Rocket::resetStage() {
    delete this->stage;
    this->stage = new StaticFire();
}

RocketState *Rocket::getState() {
    return this->stage;
}

void Rocket::setState(RocketState *state) {
    delete this->stage;
    this->stage = state;
}

void Rocket::change() {
    this->stage->handleChange(this);
}

std::string Rocket::getStage() {
    return stage->getStage();
}

void Rocket::addSpacecraft(DragonSpacecraft* s){
    spacecraft = s ;
}

void Rocket::notifyEngines() {
    Engine *e ;
    vector<Engine*>:: iterator it;
    for (it = engineList.begin(); it != engineList.end(); ++it){
        e = *it ;
        cout << "Merlin engine " << e->getID() << " notified of changes." << endl ;
        e->update() ;
    }
}

void Rocket::addEngine(Engine * e) {
    engineList.push_back(e) ;
    cout << "Merlin Engine " << e->getID() << " added to rocket" << endl; 
}

void Rocket::removeEngine(Engine *) {
    bool found = false;

    vector<Engine*>::iterator it = engineList.begin();
    while ((it != engineList.end()) && (! found)) {
        if (*it == o) {
            found = true;
            cout << "Merlin Engine " << (it).getID() << " removed from rocket" << endl ;
            engineList.erase(it);
        }
        ++it;
    }
}
