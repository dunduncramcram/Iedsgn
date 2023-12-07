
#include "ActionsHeader.hpp"

Action_Dilemma_SummonMonster::Action_Dilemma_SummonMonster(State* previousState) : Action (
    previousState, 
    "The Director summons a monster in the Office", 
    "(Place a monster not on the board as Hidden/face down)"
) {};

Action_Dilemma_SummonMonster::~Action_Dilemma_SummonMonster(){};

void Action_Dilemma_SummonMonster::actionEffects(GameController* game){

};
