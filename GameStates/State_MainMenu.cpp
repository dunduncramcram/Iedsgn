
#include "StatesHeader.hpp"
#include <iostream>

enum State_MainMenu::stateOptions : unsigned int {
    start_playing = 1, see_instructions = 2, quit_app = 3
};

State_MainMenu::State_MainMenu(){};
State_MainMenu::~State_MainMenu(){};

void State_MainMenu::stateLogic(GameController* game){
state_beginning:
    stateRender(game);

    int input; std::cin >> input;
    std::cin.ignore(); std::cin.clear();

    stateOptions 
        choice = static_cast<stateOptions>(input);

    switch(choice){
        case start_playing:
            game->setState(new State_NamingDirector());
            break;
        case see_instructions:
            game->setState(new State_ShowingInstructions());
            break;
        case quit_app:
            game->setState(new State_ExitingApp());
            break;
    }
};