
#include "ActionsHeader.hpp"

Action_RingmasterAttack::Action_RingmasterAttack(State* previousState) : Action (
    previousState, 
    "The Ringmaster Attacks!", 
    "Sowing chaos among the timid, the Ringmaster's victim takes Burden and the Director puts a random discarded Dilemma to the top of the deck"
) {};

Action_RingmasterAttack::~Action_RingmasterAttack(){};

void Action_RingmasterAttack::actionEffects(GameController* game){
    
    Action_TargetPatient* targeting = new Action_TargetPatient(this);

    game->setState(targeting);
    game->runState();

    Patient* victim = targeting->getSelected();

    victim->giveBurden(game->getMonsterDamage());
    
};
