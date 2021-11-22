#include "StaticFireCommand.h"


StaticFireCommand::StaticFireCommand(Rocket* r):Command{r} {}

void StaticFireCommand::execute(){
    receiver->staticFire() ;
}

void StaticFireCommand::undo(){
    //figure out
}