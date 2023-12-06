
#include "StatesHeader.hpp"

enum State_DirectorTurn::stateOptions : unsigned int {
    end_turn, 
};

State_DirectorTurn::State_DirectorTurn(){};
State_DirectorTurn::~State_DirectorTurn(){};

void State_DirectorTurn::stateLogic(GameController* game){
state_beginning:
    stateRender(game);

    int input; std::cin >> input;
    std::cin.ignore(); std::cin.clear();

    stateOptions
        choice = static_cast<stateOptions>(input);

    // Process director actions

    switch(choice){
        case end_turn:
            game->setState(new State_HungerPangs());
    }
    
};