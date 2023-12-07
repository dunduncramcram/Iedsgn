
#include "ActionsHeader.hpp"

Action_StudentsAbility::Action_StudentsAbility(State* previousState) : Action (
    previousState, 
    "Consider all possibilities and change your future!", 
    "Look at the top 5 cards of the deck, then put them back on top in any order"
) {};

Action_StudentsAbility::~Action_StudentsAbility(){};

void Action_StudentsAbility::actionEffects(GameController* game){
    //Empty on Purpose
};
