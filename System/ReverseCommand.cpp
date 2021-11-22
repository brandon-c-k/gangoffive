#include "ReverseCommand.h"


ReverseCommand::ReverseCommand(Rocket* r):Command{r} {}

void ReverseCommand::execute(){
    receiver->reverseState() ;
}

void ReverseCommand::undo(){
    //figure out
}