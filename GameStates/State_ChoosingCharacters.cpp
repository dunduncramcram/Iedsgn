
#include "StatesHeader.hpp"
#include <iostream>

enum State_ChoosingCharacters::stateOptions : unsigned int {
    
};

State_ChoosingCharacters::State_ChoosingCharacters(){};
State_ChoosingCharacters::~State_ChoosingCharacters(){};

void State_ChoosingCharacters::stateLogic(GameController* game){
state_beginning:
    stateRender();

    std::cout << "filler text" << std::endl;
    
    game->setState(new State_DealingCards());
};