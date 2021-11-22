#ifndef GANGOFFIVE_CREWDRAGON_H
#define GANGOFFIVE_CREWDRAGON_H

#include "DragonSpacecraft.h"

class CrewDragon:  public DragonSpacecraft{
    public:
        CrewDragon(int crewAmount, int cargoAmount = 0);
        int getCrew() ;
        void setCrew(int );
        virtual std::string getName();
    private:
        int crew ;
};


#endif //GANGOFFIVE_CREWDRAGON_H
