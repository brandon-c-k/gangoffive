#include "FirstStageCommand.h"

FirstStageCommand::FirstStageCommand(Rocket* r):Command{r} {}

void FirstStageCommand::execute(){
    receiver->firstStage() ;
}

void FirstStageCommand::undo(){
    //figure out
}