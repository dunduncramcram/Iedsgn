
#include "ActionsHeader.hpp"

Action_GroomAttack::Action_GroomAttack(State* previousState) : Action (
    previousState, 
    "The Groom Attacks!", 
    "Preying on the mentally infirm, the Groom gives an extra Burden to its victims. Stall (remove from board) the Groom"
) {};

Action_GroomAttack::~Action_GroomAttack(){};

void Action_GroomAttack::actionEffects(GameController* game){
    
    Action_TargetPatient* targeting = new Action_TargetPatient(this);

    game->setState(targeting);
    game->runState();

    Patient* victim = targeting->getSelected();

    victim->giveBurden(game->getMonsterDamage() + 1);
    
};
