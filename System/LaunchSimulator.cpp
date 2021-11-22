#include "LaunchSimulator.h"
#include "Falcon9Creator.h"
#include "FalconHeavyCreator.h"
#include "CrewDragon.h"
#include <iomanip>
void LaunchSimulator::optimizeLaunches(int sat, int crew, int cargo ) {
    RocketCreator* falcon9 = new Falcon9Creator();
    RocketCreator* falconHeavy = new FalconHeavyCreator();

    int totCargoCap = 0; // Keeps track of the total cargo capabilities as rockets are added

    vector<Rocket*> rockets;
    while (sat > 0){
        Rocket* newRocket = falcon9->createRocket(false);
        dynamic_cast<Falcon9*>(newRocket)->setSatellites(true);
        rockets.push_back(newRocket);
        sat--;
    }
    while (cargo > 0) {
        Rocket* r;
        int crewCount = 0;
        int cargoAmount = 0;
        if (cargo >  45600){
            if (cargo >= 63800){
                cargoAmount = 63800;
                cargo -= cargoAmount;
            } else {
                cargoAmount = cargo;
                cargo = 0;
            }
            totCargoCap +=cargoAmount;
            if (crew > 0){
                if (crew >= 7){
                    crewCount = 7;
                    crew -= 7;
                } else {
                    crewCount = crew;
                    crew -= crewCount;
                }
                r = falconHeavy->createRocket(true,crewCount);
                r->getSpacecraft()->setCargo(cargoAmount);
                rockets.push_back(r);
            } else {
                r = falconHeavy->createRocket(false);
                r->getSpacecraft()->setCargo(cargoAmount);
                rockets.push_back(r);
            }
        } else {
            if (cargo < 22800){
                cargoAmount = cargo;
                cargo = 0;
            } else {
                cargoAmount = 22800;
                cargo -= cargoAmount;
            }
            totCargoCap +=cargoAmount;
            if (crew > 0) {
                if (crew >= 7) {
                    crewCount = 7;
                    crew -= 7;
                } else {
                    crewCount = crew;
                    crew -= crewCount;
                }
                r = falcon9->createRocket(true,crewCount);
                r->getSpacecraft()->setCargo(cargoAmount);
                rockets.push_back(r);
            } else {
                r = falcon9->createRocket(false);
                r->getSpacecraft()->setCargo(cargoAmount);
                rockets.push_back(r);
            }
        }

    }
    while (crew > 0){
        Rocket* r;
        int crewCount = 0;
        if (crew >= 7) {
            crewCount = 7;
            crew -= 7;
        } else {
            crewCount = crew;
            crew -= crewCount;
        }
        r = falcon9->createRocket(true,crewCount);
        rockets.push_back(r);
    }
    string spacecraftName;
    string rocketType;
    cout<<"Optimized Rocket Configurations:"<<endl;
    cout<<"Rocket Type | Spacecraft Type | Crew Count | Cargo Amount | Satellites"<<endl;
    for (auto & rocket : rockets) {
        launchList->storeLaunch(rocket);
        rocketType = rocket->getType();
        cout<<rocketType << setw(15) <<setfill(' ');;
        spacecraftName = rocket->getSpacecraft()->getName();
        cout << spacecraftName << setw(15) <<setfill(' ');;
        if (spacecraftName == "Crew Dragon"){
            cout << dynamic_cast<CrewDragon*>(rocket->getSpacecraft())->getCrew() <<setw(15) <<setfill(' ');;
        } else {
            cout<< "0"<<setw(15) <<setfill(' ');
        }
        cout<< rocket->getSpacecraft()->getCargo() << setw(15) <<setfill(' ');;
        if (rocketType == "Falcon 9"){
            if (dynamic_cast<Falcon9*>(rocket)->getSatellites())
            {
                cout<<"60 satellites"<<setw(20) <<setfill(' ') << endl;
            } else {
                cout << "none" <<setw(20) <<setfill(' ') <<endl;
            }
        } else {
            cout<< "none" <<setw(20) <<setfill(' ') << endl;
        }
    }
}

LaunchSimulator::~LaunchSimulator() {

}

LaunchSimulator::LaunchSimulator() {
    launchList = new StoredLaunches() ;
    dockingPlatform = new DockingStation();
    iss = new ISS(dockingPlatform);
}

void LaunchSimulator::actualLaunch(){

    Rocket* rocket ;
    LaunchIterator* iterator = new LaunchIterator(launchList, launchList->getHead()) ;
    while(!iterator->isDone()){
        rocket = iterator->currentItem()->getRocket() ;
        staticFire = new StaticFireCommand(rocket) ;
        launch = new LaunchCommand(rocket) ;
        firstStage = new FirstStageCommand(rocket) ;
        dock = new DockCommand(rocket, iss) ;
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
    LaunchIterator* iterator = new LaunchIterator(launchList, launchList->getHead()) ;
    while(!iterator->isDone()){
        rocket = iterator->currentItem()->getRocket() ;
        staticFire = new StaticFireCommand(rocket) ;
        launch = new LaunchCommand(rocket) ;
        firstStage = new FirstStageCommand(rocket) ;
        dock = new DockCommand(rocket, iss) ;
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

        iterator->currentItem()->setRocket(rocket) ;

        iterator->next() ;
    }
    iterator = new LaunchIterator(launchList, launchList->getHead()) ;
    while(!iterator->isDone()){
        rocket = iterator->currentItem()->getRocket() ;
        rocket->reverseState();
        iterator->currentItem()->setRocket(rocket) ;
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
        launch->execute() ;
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
        firstStage->execute() ;
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
        dock->execute() ;
        success->execute() ;
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
            int newCrew = dynamic_cast<CrewDragon*>(r->getSpacecraft())->getCrew() + value ;
            dynamic_cast<CrewDragon*>(r->getSpacecraft())->setCrew(newCrew) ;
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


