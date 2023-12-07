
#include "ActionsHeader.hpp"

Action_Dilemma_ExtraDamage::Action_Dilemma_ExtraDamage(State* previousState) : Action (
    previousState, 
    "Monsters give 1 Extra Burden this round", 
    ""
) {};

Action_Dilemma_ExtraDamage::~Action_Dilemma_ExtraDamage(){};

void Action_Dilemma_ExtraDamage::actionEffects(GameController* game){
    game->setMonsterDamage(game->getMonsterDamage() + 1);
};
