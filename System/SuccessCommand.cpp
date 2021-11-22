#include "SuccessCommand.h"


SuccessCommand::SuccessCommand(Rocket* r):Command{r} {}

void SuccessCommand::execute(){
    receiver->success() ;
}

void SuccessCommand::undo(){
    //figure out
}

