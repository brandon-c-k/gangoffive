#ifndef GANGOFFIVE_ABORTCOMMAND_H
#define GANGOFFIVE_ABORTCOMMAND_H

#include "Command.h"

class AbortCommand: public Command {
    AbortCommand(Rocket*) ;
    virtual void execute() ;
    virtual void undo() ;
};


#endif //GANGOFFIVE_ABORTCOMMAND_H
