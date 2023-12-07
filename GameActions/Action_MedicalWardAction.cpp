
#include "ActionsHeader.hpp"

Action_MedicalWardAction::Action_MedicalWardAction(State* previousState) : Action (
    previousState, 
    "Medical Ward: Heal 2 Burden", 
    "(You must be in the Medical Ward to use this Action)"
) {};

Action_MedicalWardAction::~Action_MedicalWardAction(){};

void Action_MedicalWardAction::actionEffects(GameController* game){

    Action_TargetPatient* targeting = new Action_TargetPatient(this);

    game->setState(targeting);
    game->runState();

    Patient* target = targeting->getSelected();

    target->healBurden(2);

};
