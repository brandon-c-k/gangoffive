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
        reverse->execute() ;
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
        rocket = changeConfig(rocket) ;
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

Rocket* LaunchSimulator::changeConfig(Rocket* r){
    string answer ;
    int value ;

    //ADD CARGO?
    cout << "Would you like to add cargo? Y/N" << endl ;
    cin >> answer ;

    if(answer == "Y" || answer == "y"){
        //add cargo
        cout << "Enter weight of cargo to add: " << endl ;
        cin >> value ;
        int newCargo = r->getSpacecraft()->getCargo() + value ;
        if(newCargo > r->getCargoMax())
            cout << "Too much cargo for your rockets capacity" << endl ;
        else{
            r->getSpacecraft()->setCargo(newCargo) ;
        }
    }

    //ADD CREW?
    cout << "Would you like to add crew? Y/N" << endl ;
    cin >> answer ;

    if(answer == "Y" || answer == "y"){
        if(r->getSpacecraft()->hasCrew()){
            //add crew
            cout << "Enter number of crew to add: " << endl ;
            cin >> value ;
            int newCrew = r->getSpacecraft()->getCrew() + value ;
            r->getSpacecraft()->setCrew(newCrew) ;
        }else cout << "Dragon Space craft cannot carry crew" << endl ;
    }

    //ADD FUEL?
    cout << "Would you like to add fuel? Y/N" << endl ;
    cin >> answer ;

    if(answer == "Y" || answer == "y"){
        //add fuel
        cout << "Enter amount of fuel to add: " << endl ;
        cin >> value ;
        int newFuel = r->getFuel() + value ;
        r->setFuel(newFuel) ;
    }

}


