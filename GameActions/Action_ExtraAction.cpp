
#include "ActionsHeader.hpp"

Action_ExtraAction::Action_ExtraAction(Action* actionType, State* previousState) : Action (
    previousState, 
    "Take an Extra Action!", 
    "You can take an extra action at the cost of one (1) Burden!"
) {};

Action_ExtraAction::~Action_ExtraAction(){};

void Action_ExtraAction::actionEffects(GameController* game){
    Action_TargetPatient* targeting = new Action_TargetPatient(this);

    game->setState(targeting);
    game->runState();

    Patient* target = targeting->getSelected();

    target->giveBurden(1);
};
