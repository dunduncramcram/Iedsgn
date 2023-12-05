

#include "StatesHeader.hpp"
#include <iostream>

enum State_NamingDirector::stateOptions : unsigned int {
    
};

State_NamingDirector::State_NamingDirector(){};
State_NamingDirector::~State_NamingDirector(){};

void State_NamingDirector::stateLogic(GameController* game){
    if(!namedDirector)
        goto state_beginning;
    
    game->setState(new State_CountingPlayers());
    return;

state_beginning:
    stateRender();

    game->resetGameSetup();

    std::string input_name; std::getline(std::cin, input_name);

    game->setDirector(new Director(input_name));
    this->namedDirector = true;
    
    game->setState(new State_SummoningMonster(this));
};