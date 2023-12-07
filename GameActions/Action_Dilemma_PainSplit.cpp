
#include "ActionsHeader.hpp"

Action_Dilemma_PainSplit::Action_Dilemma_PainSplit(State* previousState) : Action (
    previousState, 
    "Choose to split 2 Burden between Patients", 
    ""
) {};

Action_Dilemma_PainSplit::~Action_Dilemma_PainSplit(){};

void Action_Dilemma_PainSplit::actionEffects(GameController* game){
    
    Action_TargetPatient* targeting = new Action_TargetPatient(this);

    game->setState(targeting);
    game->runState();

    Patient* 
        victim = targeting->getSelected();

    victim->giveBurden(1);

    game->setState(targeting);
    game->runState();

    victim = targeting->getSelected();

    victim->giveBurden(1);
    

};
