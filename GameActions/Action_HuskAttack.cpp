
#include "ActionsHeader.hpp"

Action_HuskAttack::Action_HuskAttack(State* previousState) : Action (
    previousState, 
    "The Husk Attacks!", 
    "Stalking those who have harmed the innocent, the Husk's victims receive Burden. Stall (remove from board) the Husk only if it has already been revealed"
) {};

Action_HuskAttack::~Action_HuskAttack(){};

void Action_HuskAttack::actionEffects(GameController* game){
    
    Action_TargetPatient* targeting = new Action_TargetPatient(this);

    game->setState(targeting);
    game->runState();

    Patient* victim = targeting->getSelected();

    victim->giveBurden(game->getMonsterDamage());
    
};
