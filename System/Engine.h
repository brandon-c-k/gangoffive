
#ifndef GANGOFFIVE_ENGINE_H
#define GANGOFFIVE_ENGINE_H

class Engine {
public:
    virtual void update() =0;
    virtual Engine* clone() = 0;
    int getID() ;
    void setID(int) ;

private:
    // State* observerState;
    int engineId;
};


#endif //GANGOFFIVE_ENGINE_H
