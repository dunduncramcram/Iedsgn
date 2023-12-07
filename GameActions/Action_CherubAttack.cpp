
#include "ActionsHeader.hpp"

Action_CherubAttack::Action_CherubAttack(State* previousState) : Action (
    previousState, 
    "The Cherub Attacks!", 
    "Cursing the unrighteous, the Cherub's victim receives Burden and the Director recovers a Dilemma. Stall (remove from board) the Cherub"
) {};

Action_CherubAttack::~Action_CherubAttack(){};

void Action_CherubAttack::actionEffects(GameController* game){

    Action_TargetPatient* targeting = new Action_TargetPatient(this);

    game->setState(targeting);
    game->runState();

    Patient* victim = targeting->getSelected();

    victim->giveBurden(game->getMonsterDamage());

    game->setState(new Action_RecoverDilemma(this, false));
    game->runState();
    
};
