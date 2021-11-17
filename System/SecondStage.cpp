
#include <string>
#include "SecondStage.h"


std::string SecondStage::getStage() {
    return "Second Stage";
}

SecondStage::SecondStage() {

}

SecondStage::~SecondStage() {

}

void SecondStage::handleChange(Rocket *rocket) {
    rocket->setState(new ReEntryFlop());
}
