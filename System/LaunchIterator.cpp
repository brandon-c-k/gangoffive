#include "LaunchIterator.h"
#include "StoredLaunches.h"
LaunchIterator::LaunchIterator(StoredLaunches *launches, MementoNode *node) {
    head = launches->getHead() ;
    current = node ;
}

LaunchIterator::LaunchIterator() {
    head = NULL ;
    current = NULL ;
}

LaunchIterator::~LaunchIterator() {

}

MementoNode* LaunchIterator::first(){
    return head ;
}

MementoNode* LaunchIterator::currentItem(){
    return current ;
}

MementoNode* LaunchIterator::next(){
    if(current->getNext() != NULL)
        current = current->getNext() ;
    else current = NULL ;
    
    return current ;
}

bool LaunchIterator::isDone(){
    return (current == NULL) ;
}
