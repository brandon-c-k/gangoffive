#include "FirstStageCommand.h"

FirstStageCommand::FirstStageCommand(Rocket* r):Command{r} {}

FirstStageCommand::execute(){
    receiver->firstStage() ;
}

FirstStageCommand::undo(){
    //figure out
}