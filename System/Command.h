#ifndef GANGOFFIVE_COMMAND_H
#define GANGOFFIVE_COMMAND_H

#include "Rocket.h"
class Command {
public:
    Command(Rocket*);
    virtual void execute() = 0;
    virtual void undo() = 0;
    virtual ~Command();
private:
    Rocket* receiver;
};


#endif //GANGOFFIVE_COMMAND_H
