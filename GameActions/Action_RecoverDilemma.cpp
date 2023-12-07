
#include "ActionsHeader.hpp"

Action_RecoverDilemma::Action_RecoverDilemma(State* previousState) : Action (
    previousState, 
    "Recover a Dilemma!", 
    "(Choose a discarded Dilemma and put it face up in front of you)"
) {};

Action_RecoverDilemma::Action_RecoverDilemma(State* previousState, bool canBeCancelled) : Action (
    previousState, 
    canBeCancelled,
    "Recover a Dilemma!", 
    "(Choose a discarded Dilemma and put it face up in front of you)"
) {};

Action_RecoverDilemma::~Action_RecoverDilemma(){};

void Action_RecoverDilemma::actionEffects(GameController* game){
    //Empty on Purpose
};
