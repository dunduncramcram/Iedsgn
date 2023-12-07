
#include "ActionsHeader.hpp"

Action_JournalistsAbility::Action_JournalistsAbility(State* previousState) : Action (
    previousState, 
    "Lure the horrors and make a new headline!", 
    "Move a monster to your Room/Tile, it cannot attack you this round"
) {};

Action_JournalistsAbility::~Action_JournalistsAbility(){};

void Action_JournalistsAbility::actionEffects(GameController* game){

};
