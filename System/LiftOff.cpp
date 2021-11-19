#include "LiftOff.h"

std::string LiftOff::getStage() {
    return "Lift Off!";
}

LiftOff::LiftOff() {

}

LiftOff::~LiftOff() {

}

void LiftOff::handleChange(Rocket *rocket) {
    rocket->setState(new ReleaseFirst());
}
