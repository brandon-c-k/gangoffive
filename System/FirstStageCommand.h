#ifndef GANGOFFIVE_FIRSTSTAGECOMMAND_H
#define GANGOFFIVE_FIRSTSTAGECOMMAND_H


#include "Command.h"

class FirstStageCommand: public Command {
    FirstStageCommand(Rocket*);
    void execute();
    void undo();
};


#endif //GANGOFFIVE_FIRSTSTAGECOMMAND_H
