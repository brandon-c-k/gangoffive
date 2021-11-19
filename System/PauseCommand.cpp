#include "PauseCommand.h"


PauseCommand::PauseCommand(Rocket* r):Command{r} {}

PauseCommand::execute(){
    receiver->pause() ;
}

PauseCommand::undo(){
    //figure out
}