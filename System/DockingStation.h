#ifndef GANGOFFIVE_DOCKINGSTATION_H
#define GANGOFFIVE_DOCKINGSTATION_H
#include <iostream>

class Rocket;

class DockingStation {
    public:
        DockingStation() ;
        ~DockingStation() ;
        void accept(Rocket*) ;

private:
    Rocket* dockedRocket;
};


#endif //GANGOFFIVE_DOCKINGSTATION_H
