#include "LaunchCommand.h"


LaunchCommand::LaunchCommand(Rocket* r):Command{r} {}

void LaunchCommand::execute(){
    receiver->launch() ;
}

void LaunchCommand::undo(){
    //figure out
}