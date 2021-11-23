
#include "Rocket.h"
#include "StaticFire.h"
#include "Memento.h"

Rocket::Rocket(int f) {
    this->stage = new StaticFire();
    this->fuel = f ;
    this->altitude = 0 ;
}

Rocket::~Rocket() {
    delete this->stage;
    delete spacecraft;
    for (int i = 0; i < engineList.size(); i++){
        delete engineList[i];
    }
    engineList.clear();
}

void Rocket::resetStage() {
    delete this->stage;
    this->stage = new StaticFire();
}

RocketState *Rocket::getState() {
    return this->stage;
}

void Rocket::setFuel(int f){
    fuel = f ;
}

void Rocket::resetAltitude(){
    altitude = 0 ;
}

int Rocket::getFuel(){
    return fuel ;
}

int Rocket::getAltitude(){
    return altitude ;
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
        e->update() ;
    }
}

void Rocket::addEngine(Engine * e) {
    e->setID(engineCount++);
    e->setRocket(this);
    engineList.push_back(e) ;
    cout << e->getName() <<" " << e->getID() << " added to "<< this->getType() << endl;
}

void Rocket::removeEngine(Engine *) {
    bool found = false;

    vector<Engine*>::iterator it = engineList.begin();
    while ((it != engineList.end()) && (! found)) {
        if (*it == 0) {
            found = true;
            cout << "Merlin Engine " << (*it)->getID() << " removed from rocket" << endl ;
            engineList.erase(it);
        }
        ++it;
    }
}

Rocket::Rocket() {

}

DragonSpacecraft *Rocket::getSpacecraft() {
    return spacecraft;
}

void Rocket::reverseState(){

    altitude = 0 ;
    RocketState* newState = new StaticFire() ;
    stage = newState ;
    
}

Memento* Rocket::createMemento() {
    return new Memento(altitude, fuel, spacecraft, engineList, stage);
}

void Rocket::restoreRocket(Memento* mem){
    altitude = mem->getAltitude() ;
    fuel = mem->getFuel() ;
    engineList = mem->getEngineList() ;
}

int Rocket::getCargoMax() {
    return cargoMax;
}

void Rocket::setCargoMax(int cap) {
    cargoMax = cap;
}

void Rocket::setAltitude(int alt) {
    this->altitude = alt;
}
