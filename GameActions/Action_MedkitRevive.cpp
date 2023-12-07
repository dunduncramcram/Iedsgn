
#include "ActionsHeader.hpp"

Action_MedkitRevive::Action_MedkitRevive(State* previousState) : Action (
    previousState, 
    "Use [TWO MEDKITS] to Revive any eliminated Patient to 3 Burden", 
    "(That Player returns to the game with no cards in hand)"
) {};

Action_MedkitRevive::~Action_MedkitRevive(){};

void Action_MedkitRevive::actionEffects(GameController* game){
    
    Action_TargetPatient* targeting = new Action_TargetPatient(this);

    game->setState(targeting);
    game->runState();

    Patient* target = targeting->getSelected();

    target->revive(3);
};
