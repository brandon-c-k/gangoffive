#ifndef GANGOFFIVE_STATICFIRECOMMAND_H
#define GANGOFFIVE_STATICFIRECOMMAND_H

#include "Command.h"

class StaticFireCommand: public Command{
public:
    StaticFireCommand(Rocket*) ;
    virtual void execute() ;
    virtual void undo() ;
};


#endif //GANGOFFIVE_STATICFIRECOMMAND_H
