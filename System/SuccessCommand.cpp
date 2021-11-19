#include "SuccessCommand.h"


SuccessCommand::SuccessCommand(Rocket* r):Command{r} {}

SuccessCommand::execute(){
    receiver->success() ;
}

SuccessCommand::undo(){
    //figure out
}

