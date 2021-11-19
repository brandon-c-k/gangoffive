#ifndef GANGOFFIVE_DRAGONSPACECRAFT_H
#define GANGOFFIVE_DRAGONSPACECRAFT_H


class DragonSpacecraft {
    public:
        DragonSpacecraft(int c);
        int getCargo() ;
        bool getDockStatus() ;
        void setDockStatus(bool) ;

    private:
        int cargo ;
        bool dockStatus ;
};


#endif //GANGOFFIVE_DRAGONSPACECRAFT_H
