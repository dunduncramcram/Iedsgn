
#include "ActionsHeader.hpp"

Action_JunkRecover::Action_JunkRecover(State* previousState) : Action (
    previousState, 
    "Use [TWO JUNK] to recover any Resource from discard", 
    "(Put your chosen Resource into your hand from the Discard Pile)"
) {};

Action_JunkRecover::~Action_JunkRecover(){};

void Action_JunkRecover::actionEffects(GameController* game){

};
