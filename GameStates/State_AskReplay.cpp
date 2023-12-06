
#include "StatesHeader.hpp"
#include <iostream>

enum State_AskReplay::stateOptions : unsigned int {
    back_to_main, replay_game
};

State_AskReplay::State_AskReplay(){};
State_AskReplay::~State_AskReplay(){};

void State_AskReplay::stateLogic(GameController* game){
state_beginning:
    stateRender(game);

    int input; std::cin >> input;
    std::cin.ignore(); std::cin.clear();

    stateOptions
        choice = static_cast<stateOptions>(input);

    switch(choice){
        case replay_game:
            game->setState(new State_NamingDirector());
            break;
        case back_to_main:
            game->setState(new State_MainMenu());
    }
};