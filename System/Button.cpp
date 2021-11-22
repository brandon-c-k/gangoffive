#include "Button.h"

Button::Button(Command* c){
    this->command = c;
}

void Button::press(){
    command->execute();
}