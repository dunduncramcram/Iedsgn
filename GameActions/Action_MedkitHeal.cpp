
#include "ActionsHeader.hpp"

Action_MedkitHeal::Action_MedkitHeal(State* previousState) : Action (
    previousState, 
    "Use [ONE MEDKIT] to Heal 1 Burden", 
    ""
) {};

Action_MedkitHeal::~Action_MedkitHeal(){};

void Action_MedkitHeal::actionEffects(GameController* game){

    Action_TargetPatient* targeting = new Action_TargetPatient(this);

    game->setState(targeting);
    game->runState();

    Patient* target = targeting->getSelected();

    target->healBurden(1);
};
