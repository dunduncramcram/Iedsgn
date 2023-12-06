

#include "StatesHeader.hpp"

enum State_HungerPangs::stateOptions : unsigned int {
    eating_skipped, player_fed,
};

State_HungerPangs::State_HungerPangs(){};
State_HungerPangs::~State_HungerPangs(){};

void State_HungerPangs::stateLogic(GameController* game){
state_beginning:
    stateRender(game);

    // Process eating per player, deal burden accordingly

    game->setState(new State_RoundEnd());
};