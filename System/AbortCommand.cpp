#include "AbortCommand.h"


AbortCommand::AbortCommand(Rocket* r):Command{r} {}

void AbortCommand::execute(){
    receiver->abort() ;
}

void AbortCommand::undo(){
    //figure out
}