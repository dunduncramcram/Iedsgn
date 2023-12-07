
#include "ActionsHeader.hpp"

Action_DrawCard::Action_DrawCard(State* previousState) : Action (
    previousState, 
    "Draw a Card!", 
    "(if it is a Dilemma put it face up in front of you, if it is a Resource, put it into hand). Then pass the Companion to the next Player"
) {};

Action_DrawCard::~Action_DrawCard(){};

void Action_DrawCard::actionEffects(GameController* game){
    //Empty on Purpose
};
