#include "LaunchCommand.h"

LaunchCommand::LaunchCommand(Rocket* r):Command{r} {}

LaunchCommand::execute(){
    receiver->launch() ;
}

LaunchCommand::undo(){
    //figure out
}