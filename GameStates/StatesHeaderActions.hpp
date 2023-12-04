
#ifndef RESOLVE_ACTIONS_H
#define RESOLVE_ACTIONS_H

#include "StatesHeader.hpp"

class State_ResolvingAction : public State {
protected:
    enum stateOptions : unsigned int;
public:
    State_ResolvingAction();
    ~State_ResolvingAction();
};

class State_FathersAbility : public State_ResolvingAction {
private:
    enum stateOptions : unsigned int;
public:
    State_FathersAbility();
    ~State_FathersAbility();
    void stateLogic(GameController* game);
    void stateRender();
};

#endif