#ifndef GANGOFFIVE_LAUNCHSIMULATOR_H
#define GANGOFFIVE_LAUNCHSIMULATOR_H

#include "StoredLaunches.h"
#include "StaticFireCommand.h"
#include "LaunchCommand.h"
#include "FirstStageCommand.h"
#include "DockCommand.h"
#include "ReverseCommand.h"
#include "SuccessCommand.h"
#include "Rocket.h"
#include "Memento.h"

class LaunchSimulator {
public:
    LaunchSimulator();
    ~LaunchSimulator();
    void optimizeLaunches(int, int, int);
    bool testMode() ;
    void actualLaunch() ;

private:
    StoredLaunches* launchList ;
    string runStaticFire(Rocket*) ;
    string runLaunch(Rocket*) ;
    string runFirstStage(Rocket*) ;
    string runDock(Rocket*) ;
    Rocket* changeConfig(Rocket*) ;
    Command* launch ;
    Command* firstStage ;
    Command* dock ;
    Command* reverse ;
    Command* success ;
};


#endif //GANGOFFIVE_LAUNCHSIMULATOR_H
