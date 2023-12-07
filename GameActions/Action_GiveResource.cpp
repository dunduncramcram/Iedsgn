
#include "ActionsHeader.hpp"

Action_GiveResource::Action_GiveResource(State* previousState) : Action (
    previousState, 
    "Give a resource to another Patient!", 
    "(This does not cost an Action)"
) {};

Action_GiveResource::~Action_GiveResource(){};

void Action_GiveResource::actionEffects(GameController* game){
    //Empty on Purpose
};
