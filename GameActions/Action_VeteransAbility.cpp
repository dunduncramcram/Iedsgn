
#include "ActionsHeader.hpp"

Action_VeteransAbility::Action_VeteransAbility(State* previousState) : Action (
    previousState, 
    "Use battle tested techniques to fight a monster!", 
    "Choose a monster to attack you, you do not get Burden from this"
) {};

Action_VeteransAbility::~Action_VeteransAbility(){};

void Action_VeteransAbility::actionEffects(GameController* game){

    unsigned int tempDamage = game->getMonsterDamage();
    game->setMonsterDamage(0);

    game->setState(new Action_MonsterAttacks(this));
    game->runState();

    game->setMonsterDamage(tempDamage);
    
};
