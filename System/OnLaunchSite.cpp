
#include "OnLaunchSite.h"

std::string OnLaunchSite::getStage() {
    return "On Launch Pad";
}

OnLaunchSite::OnLaunchSite() {

}

OnLaunchSite::~OnLaunchSite() {

}

void OnLaunchSite::handleChange(Rocket *rocket) {
    rocket->setState(new LiftOff());
}
