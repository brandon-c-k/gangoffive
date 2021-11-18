#include "AbortCommand.h"

AbortCommand::AbortCommand(Rocket* r) : Command(r){

}

void AbortCommand::execute(){
    getReciever()->abort();
}

//
void AbortCommand::undo(){

}