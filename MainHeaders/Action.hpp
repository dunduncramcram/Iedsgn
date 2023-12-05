
#ifndef ACTION_H
#define ACTION_H

#include "State.hpp"

class Action : public State {
protected:
    enum stateOptions : unsigned int;

    State* previousState;
    std::string actionText;
    
public:
    Action(State* currentState, std::string action_text);
    ~Action();
    void stateLogic(GameController* game);
};

#endif