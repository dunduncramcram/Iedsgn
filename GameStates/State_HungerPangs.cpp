

#include "StatesHeader.hpp"

enum State_HungerPangs::stateOptions : unsigned int {
    player_fed, eating_skipped
};

State_HungerPangs::State_HungerPangs(){};
State_HungerPangs::~State_HungerPangs(){};

void State_HungerPangs::stateLogic(GameController* game){
state_beginning:
    stateRender();

    game->setState(new State_RoundEnd());
};