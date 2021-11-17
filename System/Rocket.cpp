
#include "Rocket.h"
#include "StaticFire.h"
Rocket::Rocket() {
    this->stage = new StaticFire();
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

void Rocket::staticFire() {

}

void Rocket::launch() {

}

void Rocket::firstStage() {

}

void Rocket::abort() {

}

void Rocket::pause() {

}

void Rocket::success() {

}

void Rocket::dock() {

}

void Rocket::notifyEngines() {

}

void Rocket::addEngine(Engine *) {

}

void Rocket::removeEngine(Engine *) {

}
