#include "StaticFireCommand.h"

StaticFireCommand::StaticFireCommand(Rocket* r) : Command(r){

}

void StaticFireCommand::execute(){
    getReciever()->staticFire();
}

//
void StaticFireCommand::undo(){
    getReciever()->abort();
}