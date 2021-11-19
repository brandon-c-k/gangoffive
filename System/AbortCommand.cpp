#include "AbortCommand.h"


AbortCommand::AbortCommand(Rocket* r):Command{r} {}

AbortCommand::execute(){
    receiver->abort() ;
}

AbortCommand::undo(){
    //figure out
}