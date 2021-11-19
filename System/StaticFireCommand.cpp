#include "StaticFireCommand.h"


StaticFireCommand::StaticFireCommand(Rocket* r):Command{r} {}

StaticFireCommand::execute(){
    receiver->staticFire() ;
}

StaticFireCommand::undo(){
    //figure out
}