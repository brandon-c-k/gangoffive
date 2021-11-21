#ifndef GANGOFFIVE_DRAGONSPACECRAFT_H
#define GANGOFFIVE_DRAGONSPACECRAFT_H


class DragonSpacecraft {
    public:
        DragonSpacecraft(int c);
        int getCargo() ;
        bool getDockStatus() ;
        void setDockStatus(bool) ;
        virtual getCrew() = 0 ;
        bool hasCrew() ;

    private:
        int cargo ;
        bool dockStatus ;
        bool crewShip = false ;
};


#endif //GANGOFFIVE_DRAGONSPACECRAFT_H
