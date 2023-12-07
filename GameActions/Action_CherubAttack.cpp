
#include "ActionsHeader.hpp"

Action_SummonMonster::Action_SummonMonster(State* previousState) : Action (
    previousState, 
    "Summon a Monster!", 
    "The Director chooses any monster not on the board and puts it Hidden (face down) in the Office"
) {};

Action_SummonMonster::~Action_SummonMonster(){};

void Action_SummonMonster::actionEffects(GameController* game){
    // Select a target

    Action_TargetPatient* target = new Action_TargetPatient(this);

    game->setState(target);
    game->runState();

    Patient* victim = target->getSelected();

    victim->giveBurden(game->getMonsterDamage());

    game->setState(new Action_SummonMonster());
    game->runState();
    
};
