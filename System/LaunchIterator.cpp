#include "LaunchIterator.h"
#include "StoredLaunches.h"
LaunchIterator::LaunchIterator(StoredLaunches *launches, RocketNode *node) {
    head = launches->getHead() ;
    current = node ;
}

LaunchIterator::LaunchIterator() {
    head = NULL ;
    current = NULL ;
}

LaunchIterator::~LaunchIterator() {

}

RocketNode* LaunchIterator::first(){
    return head ;
}

RocketNode* LaunchIterator::currentItem(){
    return current ;
}

RocketNode* LaunchIterator::next(){
    if(current->getNext() != NULL)
        current = current->getNext() ;
    else current = NULL ;

    return current ;
}

bool LaunchIterator::isDone(){
    return (current == NULL) ;
}
