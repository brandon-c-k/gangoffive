
#include "LandingBurn.h"

std::string LandingBurn::getStage() {
    return "Landing Burn";
}

LandingBurn::LandingBurn() {

}

LandingBurn::~LandingBurn() {

}

void LandingBurn::handleChange(Rocket *rocket) {
    rocket->setState(nullptr);
}
