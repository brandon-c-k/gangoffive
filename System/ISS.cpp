#include "ISS.h"

ISS::ISS(DockingStation* d){
    arrivalPad = d ;
}

ISS::~ISS(){
    delete arrivalPad ;
}

void ISS::welcome(Rocket* r){
    std::cout << "The International Space Station welcomes the arrival of the Rocket." << std::endl ;
    arrivalPad->accept(r) ;
}