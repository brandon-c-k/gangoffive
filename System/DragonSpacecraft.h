#ifndef GANGOFFIVE_DRAGONSPACECRAFT_H
#define GANGOFFIVE_DRAGONSPACECRAFT_H
#include <string>

class DragonSpacecraft {
    public:
        DragonSpacecraft(int c = 0);
        int getCargo() ;
        void setCargo(int) ;
        bool getDockStatus() ;
        void setDockStatus(bool) ;
        bool hasCrew() ;
        void setCrewShip(bool);
        virtual ~DragonSpacecraft();
        virtual std::string getName();

    private:
        int cargo ;
        bool dockStatus ;
        bool crewShip = false ;
};


#endif //GANGOFFIVE_DRAGONSPACECRAFT_H
