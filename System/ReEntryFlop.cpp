
#include "ReEntryFlop.h"

std::string ReEntryFlop::getStage() {
    return "Re-entry Flop";
}

ReEntryFlop::ReEntryFlop() {

}

ReEntryFlop::~ReEntryFlop() {

}

void ReEntryFlop::handleChange(Rocket *rocket) {
    rocket->setState(new LandingBurn());
}
