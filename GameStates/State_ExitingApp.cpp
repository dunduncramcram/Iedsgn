
#include "StatesHeader.hpp"
#include <stdlib.h>

enum State_ExitingApp::stateOptions : unsigned int {
    
};

State_ExitingApp::State_ExitingApp(){};
State_ExitingApp::~State_ExitingApp(){};

void State_ExitingApp::stateLogic(GameController* game){
state_beginning:
    stateRender(game);

    system("pause");
    exit(EXIT_SUCCESS);
};