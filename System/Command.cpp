#include "Command.h"

Command::Command(Rocket * r) {
    this->receiver = r;
}

Command::~Command() {

}