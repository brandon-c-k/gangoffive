#include "DockCommand.h"


DockCommand::DockCommand(Rocket* r, ISS* i):Command{r} {
    iss = i;
}

void DockCommand::execute(){
    receiver->dock(iss) ;
}

void DockCommand::undo(){
    //figure out
}
