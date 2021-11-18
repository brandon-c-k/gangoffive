#ifndef GANGOFFIVE_SUCCESSCOMMAND_H
#define GANGOFFIVE_SUCCESSCOMMAND_H

#include "Command.h"

class SuccessCommand: public Command{
    SuccessCommand(Rocket*);
    void execute();
    void undo();
};


#endif //GANGOFFIVE_SUCCESSCOMMAND_H
