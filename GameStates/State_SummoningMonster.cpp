

#include "StatesHeader.hpp"

enum State_SummoningMonster::stateOptions : unsigned int {
    finished_summoning
};

State_SummoningMonster::State_SummoningMonster(State* currentState){
    this->lastState = currentState;
};

State_SummoningMonster::~State_SummoningMonster(){};

void State_SummoningMonster::stateLogic(GameController* game){
state_beginning:
    stateRender(game);

    int input; std::cin >> input;
    std::cin.ignore(); std::cin.clear();

    stateOptions
        choice = static_cast<stateOptions>(input);
    
    switch(choice){
        case finished_summoning:
            game->setState(lastState);    
            break;
    }

};