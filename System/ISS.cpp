#include "ISS.h"

ISS::ISS(DockingStation* d){
    arrivalPad = d ;
}

ISS::~ISS(){
    delete arrivalPad ;
}

void ISS::welcome(Rocket* r){
    cout << "The International Space Station welcomes the arrival of the Rocket." << endl ;
    arrivalPad->accept(r) ;
}