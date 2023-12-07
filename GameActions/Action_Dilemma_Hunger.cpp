
#include "ActionsHeader.hpp"

Action_Dilemma_Hunger::Action_Dilemma_Hunger(State* previousState) : Action (
    previousState, 
    "Choose a Patient, their Hunger Pangs cost one more Ration this round", 
    ""
) {};

Action_Dilemma_Hunger::~Action_Dilemma_Hunger(){};

void Action_Dilemma_Hunger::actionEffects(GameController* game){
    // Consider adding tracking of this
};
