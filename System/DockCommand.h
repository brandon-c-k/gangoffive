#ifndef GANGOFFIVE_DOCKCOMMAND_H
#define GANGOFFIVE_DOCKCOMMAND_H

#include "Command.h"

class DockCommand: public Command{
    DockCommand(Rocket*) ;
    virtual void execute() ;
    virtual void undo() ;

};


#endif //GANGOFFIVE_DOCKCOMMAND_H