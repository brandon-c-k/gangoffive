#ifndef GANGOFFIVE_MEMENTONODE_H
#define GANGOFFIVE_MEMENTONODE_H

#include "Memento.h"

class MementoNode {
public:
    MementoNode(Memento*);
    ~MementoNode();
    MementoNode* getNext();
    void setNext(MementoNode*);
    MementoNode* getPrevious();
    void setPrevious(MementoNode*);
    Memento* getMemento();

private:
    Memento* memento;
    MementoNode* next;
    MementoNode* previous;
};


#endif //GANGOFFIVE_MEMENTONODE_H
