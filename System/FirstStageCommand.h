#ifndef GANGOFFIVE_FIRSTSTAGECOMMAND_H
#define GANGOFFIVE_FIRSTSTAGECOMMAND_H

#include "Command.h"

class FirstStageCommand: public Command {
    FirstStageCommand(Rocket*) ;
    virtual void execute() ;
    virtual void undo() ;
};


#endif //GANGOFFIVE_FIRSTSTAGECOMMAND_H
