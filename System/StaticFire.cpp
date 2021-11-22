#include "StaticFire.h"

std::string StaticFire::getStage() {
    return "Static Fire";
}

StaticFire::StaticFire() {

}

StaticFire::~StaticFire() {

}

void StaticFire::handleChange(Rocket* rocket) {
    rocket->setState(new OnLaunchSite());
}
