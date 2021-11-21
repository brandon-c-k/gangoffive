#ifndef GANGOFFIVE_LAUNCHITERATOR_H
#define GANGOFFIVE_LAUNCHITERATOR_H

#include "MementoNode.h"
#include "StoredLaunches.h"
class LaunchIterator {
public:
    LaunchIterator();
    LaunchIterator(StoredLaunches* launches, MementoNode* node);
    ~LaunchIterator();
protected:
    MementoNode* head;
    MementoNode* current;
};


#endif //GANGOFFIVE_LAUNCHITERATOR_H
