#ifndef GANGOFFIVE_STATICFIRECOMMAND_H
#define GANGOFFIVE_STATICFIRECOMMAND_H

#include "Command.h"

class StaticFireCommand: public Command{
    StaticFireCommand(Rocket*);
    void execute();
    void undo();
};


#endif //GANGOFFIVE_STATICFIRECOMMAND_H
