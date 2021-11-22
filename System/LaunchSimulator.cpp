#include "LaunchSimulator.h"

void LaunchSimulator::optimizeLaunches(int sat, int crew, int cargo ) {
    
}

LaunchSimulator::~LaunchSimulator() {

}

LaunchSimulator::LaunchSimulator() {
    launchList = new StoredLaunches() ;
}

void LaunchSimulator::actualLaunch(){

    Rocket* rocket ;
    LaunchIterator iterator = new LaunchIterator(launchList, launchList->getHead()) ;
    while(!iterator->isDone()){
        rocket = iterator->current()->getRocket() ;
        staticFire = new StaticFireCommand(rocket) ;
        launch = new LaunchCommand(rocket) ;
        firstStage = new FirstStageCommand(rocket) ;
        dock = new DockCommand(rocket) ;
        reverse = new ReverseCommand(rocket) ;
        success = new SuccessCommand(rocket) ;

        staticFire->execute() ;
        launch->execute() ;
        firstStage->execute() ;
        dock->execute() ;
        reverse->execute() ;
        success->execute() ;

        iterator->next() ;
    } 
    
}

bool LaunchSimulator::testMode(){
    Rocket* rocket ;
    string answer ;
    Memento* mem ;
    //runStaticFire
    LaunchIterator iterator = new LaunchIterator(launchList, launchList->getHead()) ;
    while(!iterator->isDone()){
        rocket = iterator->current()->getRocket() ;
        staticFire = new StaticFireCommand(rocket) ;
        launch = new LaunchCommand(rocket) ;
        firstStage = new FirstStageCommand(rocket) ;
        dock = new DockCommand(rocket) ;
        reverse = new ReverseCommand(rocket) ;
        success = new SuccessCommand(rocket) ;

        mem = rocket->createMemento() ;
        runStaticFire(rocket) ;

        cout << "Save changes made during test mode? Y/N " << endl ;
        cin >> answer ;

        if(answer == "N" || answer == "n"){
            rocket->restoreRocket(mem) ;
        }

        iterator->current()->setRocket(rocket) ;

        iterator->next() ;
    }     
}

void LaunchSimulator::runStaticFire(Rocket* rocket){

    string answer ;
    cout << "Run static fire test?" << endl << "1: Yes" << endl << "2: No - change configuration" << endl ;
    cin >> answer ;

    if(answer == "1"){
        staticFire->execute() ;
        runLaunch(rocket) ;
    }else{
        rocket = changeConfig() ;
        runStaticFire(rocket) ;
    }
}

void LaunchSimulator::runLaunch(Rocket* rocket){

    string answer ;
    cout << "Commence with launch?" << endl << "1: Yes" << endl << "2: No - change configuration" << endl ;
    cin >> answer ;

    if(answer == "1"){
        launch->execute ;
        runFirstStage(rocket) ;
    }else{
        reverse->execute() ;
        runStaticFire(rocket) ;
    }
}

void LaunchSimulator::runFirstStage(Rocket* rocket){

    string answer ;
    cout << "Detach first stage?" << endl << "1: Yes" << endl << "2: No - change configuration" << endl ;
    cin >> answer ;

    if(answer == "1"){
        firstStage->execute ;
        runDock(rocket) ;
    }else{
        reverse->execute() ;
        runStaticFire(rocket) ;
    }

}

void LaunchSimulator::runDock(Rocket* rocket){

    string answer ;
    cout << "Dock rocket?" << endl << "1: Yes" << endl << "2: No - change configuration" << endl ;
    cin >> answer ;

    if(answer == "1"){
        dock->execute ;
        success->execute ;
    }else{
        reverse->execute() ;
        runStaticFire(rocket) ;
    }

}


