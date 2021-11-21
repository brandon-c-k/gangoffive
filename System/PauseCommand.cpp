#include "PauseCommand.h"


PauseCommand::PauseCommand(Rocket* r):Command{r} {}

void PauseCommand::execute(){
    //receiver->pause() ;
}

void PauseCommand::undo(){
    //figure out
}