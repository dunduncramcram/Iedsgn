
#include "StatesHeader.hpp"
#include <iostream>

enum State_DealingCards::stateOptions : unsigned int {
    cancel_setup, start_game, 
};

State_DealingCards::State_DealingCards(){};
State_DealingCards::~State_DealingCards(){};

void State_DealingCards::stateLogic(GameController* game){
state_beginning:
    stateRender(game);

    int input; std::cin >> input;
    std::cin.ignore(); std::cin.clear();

    stateOptions
        choice = static_cast<stateOptions>(input);

    switch(choice){
        case start_game:
            game->nextTurn();
            break;
        case cancel_setup:
            game->setState(new State_MainMenu());
            break;
    }
};