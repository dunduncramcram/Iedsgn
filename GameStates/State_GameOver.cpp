
#include "StatesHeader.hpp"
#include <iostream>

enum State_GameOver::stateOptions : unsigned int {
    proceed
};

State_GameOver::State_GameOver(){};
State_GameOver::~State_GameOver(){};

void State_GameOver::stateLogic(GameController* game){
state_beginning:

    // Pass the winner to the game render
    stateRender();

    int input; std::cin >> input;
    std::cin.ignore(); std::cin.clear();

    stateOptions
        choice = static_cast<stateOptions>(input);

    switch(choice){
        case proceed:
            game->setState(new State_AskReplay());
    }
    
};