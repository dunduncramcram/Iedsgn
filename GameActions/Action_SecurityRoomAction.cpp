
#include "ActionsHeader.hpp"

Action_SecurityRoomAction::Action_SecurityRoomAction(State* previousState) : Action (
    previousState, 
    "Security Room: Reveal (turn face up) a Monster", 
    "(You must be in the Security Room to use this Action)"
) {};

Action_SecurityRoomAction::~Action_SecurityRoomAction(){};

void Action_SecurityRoomAction::actionEffects(GameController* game){

};
