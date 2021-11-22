#ifndef GANGOFFIVE_DOCKCOMMAND_H
#define GANGOFFIVE_DOCKCOMMAND_H

#include "Command.h"

class DockCommand: public Command{
public:
    DockCommand(Rocket*, ISS*) ;
    virtual void execute() ;
    virtual void undo() ;

private:
    ISS* iss;
};


#endif //GANGOFFIVE_DOCKCOMMAND_H