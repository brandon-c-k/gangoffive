
#include <string>
#include "ReleaseFirst.h"


std::string ReleaseFirst::getStage() {
    return "First Stage Released";
}

ReleaseFirst::ReleaseFirst() {

}

ReleaseFirst::~ReleaseFirst() {

}

void ReleaseFirst::handleChange(Rocket *rocket) {
    rocket->setState(new Dock());
}
