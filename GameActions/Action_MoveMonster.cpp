
#include "ActionsHeader.hpp"

Action_MoveMonster::Action_MoveMonster(State* previousState) : Action (
    previousState, 
    "Move a Monster!", 
    "Roll a 6-sided die, choose any Monster and move it up to that many Tiles! If it ends its move on any Patient, it then attacks that Patient"
) {};

Action_MoveMonster::~Action_MoveMonster(){};

void Action_MoveMonster::actionEffects(GameController* game){
    // Consider calling the monster attack class
};
