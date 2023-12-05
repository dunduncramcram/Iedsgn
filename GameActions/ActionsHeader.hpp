
#ifndef GAME_ACTIONS_H
#define GAME_ACTIONS_H

#include "../MainHeaders/Action.hpp"

class Action_SummoningMonster : public Action {
public:
    Action_SummoningMonster(State* previousState);
    ~Action_SummoningMonster();
    void stateRender();
    void actionEffects(GameController* game);
};

class Action_FathersAbility : public Action {
public:
    Action_FathersAbility(State* previousState);
    ~Action_FathersAbility();
    void stateRender();
    void actionEffects(GameController* game);
};

#endif