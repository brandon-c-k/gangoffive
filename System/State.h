#ifndef GANGOFFIVE_STATE_H
#define GANGOFFIVE_STATE_H

//Abstract class of the state participant of state
class State {
public:
    State();
    virtual void handleChange() = 0;
    virtual void getState() =0;
    virtual ~State();
};


#endif //GANGOFFIVE_STATE_H
