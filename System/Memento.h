#ifndef GANGOFFIVE_MEMENTO_H
#define GANGOFFIVE_MEMENTO_H

#include "RocketState.h"
class Memento {
private:
    RocketState* state;

public:
    void setState(RocketState* );
    RocketState* getState();



};


#endif //GANGOFFIVE_MEMENTO_H
