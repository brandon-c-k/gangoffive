#ifndef GANGOFFIVE_DRAGONSPACECRAFT_H
#define GANGOFFIVE_DRAGONSPACECRAFT_H


class DragonSpacecraft {
    public:
        DragonSpacecraft(int c);
        int getCargo() ;
        void setCargo(int) ;
        bool getDockStatus() ;
        void setDockStatus(bool) ;
        bool hasCrew() ;
        void setCrewShip(bool);
        virtual ~DragonSpacecraft();

    private:
        int cargo ;
        bool dockStatus ;
        bool crewShip = false ;
};


#endif //GANGOFFIVE_DRAGONSPACECRAFT_H
