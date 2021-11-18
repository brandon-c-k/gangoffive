#include "FirstStageCommand.h"

FirstStageCommand::FirstStageCommand(Rocket* r) : Command(r){

}

void FirstStageCommand::execute(){
    getReciever()->firstStage();
}

//
void FirstStageCommand::undo(){
    getReciever()->pause();
}