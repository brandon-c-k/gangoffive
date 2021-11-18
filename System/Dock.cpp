
#include "Dock.h"

std::string Dock::getStage() {
    return "Docked";
}

Dock::Dock() {

}

Dock::~Dock() {

}

void Dock::handleChange(Rocket *rocket) {
    rocket->setState(new Reentry());
}
