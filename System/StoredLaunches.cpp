#include "StoredLaunches.h"
#include "MementoNode.h"
StoredLaunches::StoredLaunches(){
    head = nullptr;
}

void StoredLaunches::storeLaunch(Rocket* r){
    RocketNode* node = new RocketNode(r);
    node->setNext(nullptr);
    if(!isEmpty()){
       //insert new MemNode at the end of list
        RocketNode* last = getLastNode();
        last->setNext(node);
        node->setPrevious(last);
    } else {
        //Make new MemNode as head of list if no head
        node->setPrevious(nullptr);
        head = node;
    }
    
}

// Returns last memento stored in the LL
Rocket* StoredLaunches::retrieveLaunch(){
    return getLastNode()->getRocket();
}

bool StoredLaunches::isEmpty(){
    if(head == nullptr)
        return true;
    else 
        return false;
}

RocketNode* StoredLaunches::getLastNode(){

    RocketNode* last = head;
    // find last node in LL
    while (last->getNext() != nullptr)
    {
        last = last->getNext();
    }
    return last;
    
}

LaunchIterator* StoredLaunches::begin() {
    return new LaunchIterator();
}

LaunchIterator* StoredLaunches::end() {
    return new LaunchIterator();
}

RocketNode* StoredLaunches::getHead(){
    return head ;
}