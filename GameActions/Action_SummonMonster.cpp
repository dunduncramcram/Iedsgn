
#include "ActionsHeader.hpp"

Action_SummonMonster::Action_SummonMonster(State* previousState) : Action (
    previousState, 
    "Summon a Monster!", 
    "Chooses any monster not on the board and put it Hidden (face down) in the Office"
) {};

Action_SummonMonster::~Action_SummonMonster(){};

void Action_SummonMonster::actionEffects(GameController* game){

};
