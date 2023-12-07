
#ifndef ACTION_H
#define ACTION_H

#include "State.hpp"
#include <vector>

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
    void renderState(GameController* game);
    void stateLogic(GameController* game);
    virtual void actionEffects(GameController* game);
};

#endif