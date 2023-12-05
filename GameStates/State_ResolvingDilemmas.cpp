

#include "StatesHeader.hpp"

enum State_ResolvingDilemmas::stateOptions : unsigned int {
    finished_resolving
};

State_ResolvingDilemmas::State_ResolvingDilemmas(){};
State_ResolvingDilemmas::~State_ResolvingDilemmas(){};

void State_ResolvingDilemmas::stateLogic(GameController* game){
state_beginning:
    stateRender();

    
    
};