#ifndef GANGOFFIVE_STOREDLAUNCHES_H
#define GANGOFFIVE_STOREDLAUNCHES_H

#include "MementoNode.h"
#include "LaunchIterator.h"
#include <vector>
#include <iostream>


class StoredLaunches {
private:
    MementoNode* head;

public:
    StoredLaunches();
    void storeLaunch(Memento*);
    Memento* retrieveLaunch();
    bool isEmpty();
    LaunchIterator begin();
    LaunchIterator end();
    MementoNode* getLastNode();
};


#endif //GANGOFFIVE_STOREDLAUNCHES_H
