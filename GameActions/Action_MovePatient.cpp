
#include "ActionsHeader.hpp"

Action_MovePatient::Action_MovePatient(State* previousState) : Action (
    previousState, 
    "Take your move!", 
    "Roll a 6-sided die, and move your Token up to that many Tiles. (You may only enter or exit rooms through Yellow Doorways)"
) {};

Action_MovePatient::~Action_MovePatient(){};

void Action_MovePatient::actionEffects(GameController* game){

};
