
#include "StatesHeader.hpp"
#include <iostream>

enum State_ChoosingCharacters::stateOptions : unsigned int {
    
};

State_ChoosingCharacters::State_ChoosingCharacters(){};
State_ChoosingCharacters::~State_ChoosingCharacters(){};

void State_ChoosingCharacters::stateLogic(GameController* game){
state_beginning:
    stateRender();

    std::cout << "Need to iterate character choosing between patients based on patient count, then pushing to the patient vector in the game" << std::endl;
    
    game->setState(new State_DealingCards());
};