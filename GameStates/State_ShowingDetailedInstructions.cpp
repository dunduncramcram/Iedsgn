
#include "StatesHeader.hpp"
#include <iostream>

enum State_ShowingDetailedInstructions::stateOptions : unsigned int {
    back_to_main
};

State_ShowingDetailedInstructions::State_ShowingDetailedInstructions(){};
State_ShowingDetailedInstructions::~State_ShowingDetailedInstructions(){};

void State_ShowingDetailedInstructions::stateLogic(GameController* game){
state_beginning:
    stateRender();

    int input; std::cin >> input;
    std::cin.ignore(); std::cin.clear();

    stateOptions
        choice = static_cast<stateOptions>(input);

    switch(choice){
        case back_to_main:
            game->setState(new State_MainMenu);
            break;
    }
};