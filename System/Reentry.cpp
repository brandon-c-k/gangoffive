
#include "Reentry.h"

std::string Reentry::getStage() {
    return "Re-entry";
}

Reentry::Reentry() {

}

Reentry::~Reentry() {

}

void Reentry::handleChange(Rocket *rocket) {
    rocket->setState(nullptr);
}
