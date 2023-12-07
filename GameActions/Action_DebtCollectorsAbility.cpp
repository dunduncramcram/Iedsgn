
#include "ActionsHeader.hpp"

Action_DebtCollectorsAbility::Action_DebtCollectorsAbility(State* previousState) : Action (
    previousState, 
    "Survive and beg for the aid of others!", 
    "Choose another Patient and they have to give you at least one resource if able"
) {};

Action_DebtCollectorsAbility::~Action_DebtCollectorsAbility(){};

void Action_DebtCollectorsAbility::actionEffects(GameController* game){

};
