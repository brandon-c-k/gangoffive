#include "StoredLaunches.h"

StoredLaunches::StoredLaunches(){
    head = nullptr;
}

void StoredLaunches::storeLaunch(Memento* m){
    MementoNode* node = new MementoNode(m);
    node->setNext(nullptr);
    if(isEmpty() == false){
       //insert new MemNode at the end of list
        MementoNode* last = getLastNode(); 
        last->setNext(node);
        node->setPrevious(last);
    } else {
        //Make new MemNode as head of list if no head
        node->setPrevious(nullptr);
        head = node;
    }
    
}

// Returns last memento stored in the LL
Memento* StoredLaunches::retrieveLaunch(){
    return getLastNode()->getMemento();
}

bool StoredLaunches::isEmpty(){
    if(head == nullptr)
        return true;
    else 
        return false;
}

MementoNode* StoredLaunches::getLastNode(){

    MementoNode* last = head;
    // find last node in LL
    while (last->getNext() != nullptr)
    {
        last = last->getNext();
    }
    return last;
    
}

LaunchIterator StoredLaunches::begin() {
    return LaunchIterator();
}

LaunchIterator StoredLaunches::end() {
    return LaunchIterator();
}
