#ifndef GANGOFFIVE_MERLINENGINE_H
#define GANGOFFIVE_MERLINENGINE_H
#include "Engine.h"
class MerlinEngine: public Engine{
public:
    MerlinEngine();
    virtual Engine* clone();
    virtual void update();
    virtual std::string getName();

protected:
    MerlinEngine(const MerlinEngine&);
};


#endif //GANGOFFIVE_MERLINENGINE_H
