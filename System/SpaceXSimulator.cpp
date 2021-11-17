#include "Rocket.h"
#include "iostream"
int main() {
    Rocket* r = new Rocket();
    for (int i = 0; i < 7; i ++){
        if (r->getState() == nullptr){
            std::cout << "Null" << std::endl;
        } else {
            std::cout << r->getStage() << std::endl;
        }
        r->change();
    }
}

