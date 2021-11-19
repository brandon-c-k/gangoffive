#include "StoredLaunches.h"

StoredLaunches::StoredLaunches(){
    head = nullptr;
}

void StoredLaunches::storeLaunch(Memento* m){
    MementoNode* node = new MementoNode(m);
    node->next = nullptr;
    if(isEmpty() == false){
       //insert new MemNode at the end of list
        MementoNode* last = getLastNode(); 
        last->next = node;
        node->previous = last;
    }

    else{
        //Make new MemNode as head of list if no head
        node->previous = nullptr;
        head = node;
    }
    
}

// Returns last memento stored in the LL
Memento* StoredLaunches::retrieveLaunch(){
    return getLastNode()->memento;
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
    while (last->next != nullptr)
    {
        last = last->next; 
    }
    return last;
    
}

LaunchIterator StoredLaunches::begin() {
    return LaunchIterator();
}

LaunchIterator StoredLaunches::end() {
    return LaunchIterator();
}
