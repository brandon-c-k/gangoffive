#ifndef GANGOFFIVE_LAUNCHITERATOR_H
#define GANGOFFIVE_LAUNCHITERATOR_H

#include "MementoNode.h"
class StoredLaunches;
class LaunchIterator {
public:
    LaunchIterator();
    LaunchIterator(StoredLaunches*, MementoNode* );
    ~LaunchIterator();
    MementoNode* first() ;
    MementoNode* next() ;
    MementoNode* currentItem() ;
protected:
    MementoNode* head;
    MementoNode* current;
};


#endif //GANGOFFIVE_LAUNCHITERATOR_H
