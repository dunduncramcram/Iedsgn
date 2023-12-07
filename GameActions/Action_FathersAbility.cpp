
#include "ActionsHeader.hpp"

Action_FathersAbility::Action_FathersAbility(State* previousState) : Action (
    previousState, 
    "Suffer for the sake of another!", 
    "Receive 1 Burden, if you do, Heal 2 Burden from any Patient"
) {};

Action_FathersAbility::~Action_FathersAbility(){};

void Action_FathersAbility::actionEffects(GameController* game){

    Action_TargetPatient* targeting = new Action_TargetPatient(this);

    game->setState(targeting);
    game->runState();

    Patient* target = targeting->getSelected();

    target->healBurden(2);

};
