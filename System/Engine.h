
#ifndef GANGOFFIVE_ENGINE_H
#define GANGOFFIVE_ENGINE_H
#include <string>

class Rocket;
class RocketState;

class Engine {
public:
    virtual void update() =0;
    virtual Engine* clone() = 0;
    int getID() ;
    void setID(int) ;
    Engine();
    ~Engine();
    Rocket* getRocket();
    void setRocket(Rocket*);
    virtual std::string getName() =0;

protected:
    Engine(const Engine&);
    RocketState* observerState;
    int engineId;

private:
    Rocket* rocket;
};


#endif //GANGOFFIVE_ENGINE_H
