#ifndef GANGOFFIVE_SUCCESSCOMMAND_H
#define GANGOFFIVE_SUCCESSCOMMAND_H

#include "Command.h"

class SuccessCommand: public Command{
public:
    SuccessCommand(Rocket*) ;
    virtual void execute() ;
    virtual void undo() ;

};


#endif //GANGOFFIVE_SUCCESSCOMMAND_H
