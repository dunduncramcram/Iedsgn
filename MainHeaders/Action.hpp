
#ifndef ACTION_H
#define ACTION_H

#include "State.hpp"

class State;

class Action : public State {
protected:
    enum stateOptions : unsigned int;

    State* previousState;
    std::string actionName;
    std::string actionText;
    bool isCancellable;

public:
    Action(State* currentState, std::string action_name, std::string action_text);
    Action(State* currentState, bool canBeCancelled, std::string action_name, std::string action_text);
    ~Action();
    virtual void stateRender(GameController* game);
    virtual void stateLogic(GameController* game);
    virtual void actionEffects(GameController* game) = 0;
};

#endif