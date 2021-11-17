
#ifndef GANGOFFIVE_ENGINE_H
#define GANGOFFIVE_ENGINE_H

class Engine {
public:
    virtual void update() =0;
    virtual void clone(Engine *) = 0;

private:
    // State* observerState;
    int engineId;
};


#endif //GANGOFFIVE_ENGINE_H
