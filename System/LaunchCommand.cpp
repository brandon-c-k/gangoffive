#include "LaunchCommand.h"

LaunchCommand::LaunchCommand(Rocket* r) : Command(r){

}

void LaunchCommand::execute(){
    getReciever()->launch();
}

//maybe change to  
void LaunchCommand::undo(){
    getReciever()->abort();
}