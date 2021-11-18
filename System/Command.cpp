#include "Command.h"

Command::Command(Rocket * r) {
    this->receiver = r;
}

Command::~Command() {
    delete receiver;
}

Rocket* Command::getReciever(){
    return receiver;
}