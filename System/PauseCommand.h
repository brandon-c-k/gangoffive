#ifndef GANGOFFIVE_PAUSECOMMAND_H
#define GANGOFFIVE_PAUSECOMMAND_H

#include "Command.h"

class PauseCommand: public Command{
    PauseCommand(Rocket*);
    void execute();
    void undo();
};


#endif //GANGOFFIVE_PAUSECOMMAND_H
