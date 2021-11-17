
#include "MainStage.h"

std::string MainStage::getStage() {
    return "Main Stage";
}

MainStage::MainStage() {

}

MainStage::~MainStage() {

}

void MainStage::handleChange(Rocket *rocket) {
    rocket->setState(new SecondStage());
}
