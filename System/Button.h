
#ifndef GANGOFFIVE_BUTTON_H
#define GANGOFFIVE_BUTTON_H

#include "Command.h"

class Button {

private:
    Command* command;
  

public:
    Button(Command*);
    void press();
};


#endif //GANGOFFIVE_BUTTON_H
