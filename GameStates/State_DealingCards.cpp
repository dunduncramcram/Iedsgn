
#include "StatesHeader.hpp"
#include <iostream>

enum State_DealingCards::stateOptions : unsigned int {
    start_game, cancel_setup
};

State_DealingCards::State_DealingCards(){};
State_DealingCards::~State_DealingCards(){};

void State_DealingCards::stateLogic(GameController* game){
state_beginning:
    stateRender();

    int input; std::cin >> input;
    std::cin.ignore(); std::cin.clear();

    stateOptions
        choice = static_cast<stateOptions>(input);

    switch(choice){
        case start_game:
            game->setState(new State_PatientTurn());
            break;
        case cancel_setup:
            game->setState(new State_MainMenu());
            break;
    }
};