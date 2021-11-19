#ifndef GANGOFFIVE_LAUNCHCOMMAND_H
#define GANGOFFIVE_LAUNCHCOMMAND_H

#include "Command.h"

class LaunchCommand: public Command{
    LaunchCommand(Rocket*) ;
    virtual void execute() ;
    virtual void undo() ;
};


#endif //GANGOFFIVE_LAUNCHCOMMAND_H
