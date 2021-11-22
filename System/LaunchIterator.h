#ifndef GANGOFFIVE_LAUNCHITERATOR_H
#define GANGOFFIVE_LAUNCHITERATOR_H

#include "RocketNode.h"
class StoredLaunches;
class LaunchIterator {
public:
    LaunchIterator();
    LaunchIterator(StoredLaunches*, RocketNode* );
    ~LaunchIterator();
    RocketNode* first() ;
    RocketNode* next() ;
    RocketNode* currentItem() ;
    bool isDone() ;
protected:
    RocketNode* head;
    RocketNode* current;
};


#endif //GANGOFFIVE_LAUNCHITERATOR_H
