
#include "StatesHeader.hpp"
#include <iostream>

enum State_CountingPlayers::stateOptions : unsigned int {
    
};

State_CountingPlayers::State_CountingPlayers(){};
State_CountingPlayers::~State_CountingPlayers(){};

void State_CountingPlayers::stateLogic(GameController* game){
state_beginning:
    stateRender();

    int count_input; std::cin >> count_input;
    std::cin.ignore(); std::cin.clear();

    game->setPatientCount(count_input);

    game->setState(new State_ChoosingCharacters());
};