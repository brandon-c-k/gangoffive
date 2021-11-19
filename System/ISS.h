#ifndef GANGOFFIVE_ISS_H
#define GANGOFFIVE_ISS_H
#include "DockingStation.h"

class ISS {
    public:
        ISS(DockingStation*);
        ~ISS() ;
        void welcome(Rocket*);
    private:
        DockingStation* arrivalPad ;
};


#endif //GANGOFFIVE_ISS_H
