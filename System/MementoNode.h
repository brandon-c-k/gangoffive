#ifndef GANGOFFIVE_MEMENTONODE_H
#define GANGOFFIVE_MEMENTONODE_H

#include "Memento.h"

class MementoNode {
public:
MementoNode(Memento*);
Memento* memento;
MementoNode* next;
MementoNode* previous;
};


#endif //GANGOFFIVE_MEMENTONODE_H
