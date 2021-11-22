#ifndef GANGOFFIVE_REVERSECOMMAND_H
#define GANGOFFIVE_REVERSECOMMAND_H

#include "Command.h"

class ReverseCommand: public Command{
    ReverseCommand(Rocket*) ;
    virtual void execute() ;
    virtual void undo() ;

};


#endif //GANGOFFIVE_REVERSECOMMAND_H