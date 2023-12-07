
#include "ActionsHeader.hpp"

Action_PastorsAbility::Action_PastorsAbility(State* previousState) : Action (
    previousState, 
    "Use your glorious blessing to dispel evil!", 
    "Discard a resource, if you do, discard one of any Player's Dilemmas"
) {};

Action_PastorsAbility::~Action_PastorsAbility(){};

void Action_PastorsAbility::actionEffects(GameController* game){

};
