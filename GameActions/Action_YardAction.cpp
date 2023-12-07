
#include "ActionsHeader.hpp"

Action_YardAction::Action_YardAction(State* previousState) : Action (
    previousState, 
    "Yard: Recover a discarded Junk (put it into hand)", 
    "(You must be in the Yard to use this Action)"
) {};

Action_YardAction::~Action_YardAction(){};

void Action_YardAction::actionEffects(GameController* game){
    //Empty on Purpose
};
