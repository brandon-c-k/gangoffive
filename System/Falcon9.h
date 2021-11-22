#ifndef GANGOFFIVE_FALCON9_H
#define GANGOFFIVE_FALCON9_H

#include "Rocket.h"
class Falcon9: public Rocket {
public:
    Falcon9(int f) ;
    Falcon9();
    virtual ~Falcon9() ;
    virtual void staticFire();
    virtual void launch();
    virtual void firstStage();
    virtual void abort();
    virtual void success();
    virtual void dock(ISS*);
    virtual string getType();
    void setSatellites(bool);
    bool getSatellites();

private:
    bool satellites;
};


#endif //GANGOFFIVE_FALCON9_H
