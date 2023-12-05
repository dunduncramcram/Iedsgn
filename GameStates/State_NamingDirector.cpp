

#include "StatesHeader.hpp"
#include <iostream>

enum State_NamingDirector::stateOptions : unsigned int {
    
};

State_NamingDirector::State_NamingDirector(){};
State_NamingDirector::~State_NamingDirector(){};

void State_NamingDirector::stateLogic(GameController* game){
state_beginning:
    stateRender();

    std::string input_name; std::getline(std::cin, input_name);

    game->setDirector(new Director(input_name));
    
    game->setState(new State_SummoningMonster());
};