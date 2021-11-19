#include "Memento.h"

void Memento::setState(RocketState* s){
    this->state = s;
}
RocketState* Memento::getState(){
    return this->state;
}