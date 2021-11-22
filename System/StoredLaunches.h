#ifndef GANGOFFIVE_STOREDLAUNCHES_H
#define GANGOFFIVE_STOREDLAUNCHES_H

#include "RocketNode.h"
#include "LaunchIterator.h"
#include <vector>
#include <iostream>


class StoredLaunches {
private:
    RocketNode* head;

public:
    StoredLaunches();
    void storeLaunch(Memento*);
    Memento* retrieveLaunch();
    bool isEmpty();
    LaunchIterator begin();
    LaunchIterator end();
    RocketNode* getLastNode();
    RocketNode* getHead() ;
};


#endif //GANGOFFIVE_STOREDLAUNCHES_H
