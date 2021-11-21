#include "MementoNode.h"
 MementoNode::MementoNode(Memento* m){
     this->memento = m;
 }

MementoNode::~MementoNode() {

}

MementoNode *MementoNode::getNext() {
    return next;
}

void MementoNode::setNext(MementoNode * m) {
    next = m;
}

MementoNode* MementoNode::getPrevious() {
    return previous;
}

void MementoNode::setPrevious(MementoNode * m) {
    previous = m;
}

Memento *MementoNode::getMemento() {
    return memento;
}


