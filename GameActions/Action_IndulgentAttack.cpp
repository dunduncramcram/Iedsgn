
#include "ActionsHeader.hpp"

Action_IndulgentAttack::Action_IndulgentAttack(State* previousState) : Action (
    previousState, 
    "The Indulgent Attacks!", 
    "Feasting off of the cowardly, the Indulgent's victim receives Burden and must discard a card"
) {};

Action_IndulgentAttack::~Action_IndulgentAttack(){};

void Action_IndulgentAttack::actionEffects(GameController* game){

    Action_TargetPatient* targeting = new Action_TargetPatient(this);

    game->setState(targeting);
    game->runState();

    Patient* victim = targeting->getSelected();

    victim->giveBurden(game->getMonsterDamage());
    
};
