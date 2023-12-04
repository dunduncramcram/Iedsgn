

#include "StatesHeader.hpp"
#include <iostream>

enum State_NamingDirector::stateOptions : unsigned int {
    
};

State_NamingDirector::State_NamingDirector(){};
State_NamingDirector::~State_NamingDirector(){};

void State_NamingDirector::stateLogic(GameController* game){
state_beginning:
    stateRender();

    std::string input; std::getline(std::cin, input);
    
};