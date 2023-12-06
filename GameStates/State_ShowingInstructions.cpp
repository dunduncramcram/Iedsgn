

#include "StatesHeader.hpp"
#include <iostream>

enum State_ShowingInstructions::stateOptions : unsigned int {
    back_to_main, show_detailed
};

State_ShowingInstructions::State_ShowingInstructions(){};
State_ShowingInstructions::~State_ShowingInstructions(){};

void State_ShowingInstructions::stateLogic(GameController* game){
state_beginning:
    stateRender(game);

    int input; std::cin >> input;
    std::cin.ignore(); std::cin.clear();

    stateOptions
        choice = static_cast<stateOptions>(input);

    switch(choice){
        case back_to_main:
            game->setState(new State_MainMenu());
            break;
        case show_detailed:
            game->setState(new State_ShowingDetailedInstructions());
            break;
    }
};