#include "ActionsHeader.hpp"

Action_StallPatient::Action_StallPatient(State* previousState) : Action (
    previousState, 
    "Patient is stalled!", 
    "Lorem ipsum"
) {};

Action_StallPatient::~Action_StallPatient(){};

void Action_StallPatient::actionEffects(GameController* game){
    
};