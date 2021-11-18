#ifndef GANGOFFIVE_LAUNCHCOMMAND_H
#define GANGOFFIVE_LAUNCHCOMMAND_H

#include "Command.h"

class LaunchCommand: public Command{

public:
    LaunchCommand(Rocket*);
    void execute();
    void undo();
};


#endif //GANGOFFIVE_LAUNCHCOMMAND_H
