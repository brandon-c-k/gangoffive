#include "PauseCommand.h"

PauseCommand::PauseCommand(Rocket* r) : Command(r){

}

void PauseCommand::execute(){
    getReciever()->pause();
}

//how to undo a pause?
void PauseCommand::undo(){

}