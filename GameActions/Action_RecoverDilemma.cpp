
#include "ActionsHeader.hpp"

Action_RecoverDilemma::Action_RecoverDilemma(State* previousState) : Action (
    previousState, 
    "Summon a Monster!", 
    "The Director chooses any monster not on the board and puts it Hidden (face down) in the Office"
) {};

Action_RecoverDilemma::Action_RecoverDilemma(State* previousState, bool canBeCancelled) : Action (
    previousState, 
    canBeCancelled,
    "Summon a Monster!", 
    "The Director chooses any monster not on the board and puts it Hidden (face down) in the Office"
) {};

Action_RecoverDilemma::~Action_RecoverDilemma(){};

void Action_RecoverDilemma::actionEffects(GameController* game){

};
