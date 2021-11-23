#include "RocketNode.h"
 RocketNode::RocketNode(Rocket* m){
     this->rocket = m;
 }

RocketNode::~RocketNode() {
    delete rocket;
}

RocketNode *RocketNode::getNext() {
    return next;
}

void RocketNode::setNext(RocketNode * m) {
    next = m;
}

RocketNode* RocketNode::getPrevious() {
    return previous;
}

void RocketNode::setPrevious(RocketNode * m) {
    previous = m;
}

Rocket *RocketNode::getRocket() {
    return rocket;
}

void RocketNode::setRocket(Rocket* r){
    rocket = r ;
}
