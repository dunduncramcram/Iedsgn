
#include "StatesHeader.hpp"
#include <iostream>

enum State_PatientTurn::stateOptions : unsigned int {
    end_turn, 
};

State_PatientTurn::State_PatientTurn(Patient* turnOwner){
    this->owner = turnOwner;
};

State_PatientTurn::~State_PatientTurn(){};

void State_PatientTurn::stateLogic(GameController* game){
state_beginning:
    stateRender();

    std::cout << this->owner->getName() << "'s Filler Turn" << std::endl;


};