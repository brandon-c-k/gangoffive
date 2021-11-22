#include "DockCommand.h"


DockCommand::DockCommand(Rocket* r):Command{r} {}

void DockCommand::execute(){
    receiver->dock() ;
}

void DockCommand::undo(){
    //figure out
}
