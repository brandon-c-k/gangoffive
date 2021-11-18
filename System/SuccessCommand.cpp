#include "SuccessCommand.h"

SuccessCommand::SuccessCommand(Rocket* r) : Command(r){

}

void SuccessCommand::execute(){
    getReciever()->success();
}

//
void SuccessCommand::undo(){
    getReciever()->pause();
}