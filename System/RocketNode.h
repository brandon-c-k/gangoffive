#ifndef GANGOFFIVE_ROCKETNODE_H
#define GANGOFFIVE_ROCKETNODE_H

#include "Rocket.h"

class RocketNode {
public:
    RocketNode(Rocket*);
    ~RocketNode();
    RocketNode* getNext();
    void setNext(RocketNode*);
    RocketNode* getPrevious();
    void setPrevious(RocketNode*);
    Rocket* getRocket();
    void setRocket(Rocket*) ;

private:
    Rocket* rocket;
    RocketNode* next;
    RocketNode* previous;
};


#endif //GANGOFFIVE_ROCKETNODE_H