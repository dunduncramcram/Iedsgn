
#include "ActionsHeader.hpp"

Action_Dilemma_DiscardAll::Action_Dilemma_DiscardAll(State* previousState) : Action (
    previousState, 
    "All Patients Discard One", 
    ""
) {};

Action_Dilemma_DiscardAll::~Action_Dilemma_DiscardAll(){};

void Action_Dilemma_DiscardAll::actionEffects(GameController* game){
    //Empty on Purpose
};
