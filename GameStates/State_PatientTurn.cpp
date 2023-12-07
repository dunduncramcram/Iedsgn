
#include "StatesHeader.hpp"
#include <iostream>

enum State_PatientTurn::stateOptions : unsigned int {
    filler, take_character_action, take_room_action, take_resource_action, move, end_turn, 
};

State_PatientTurn::State_PatientTurn(Patient* turnOwner){
    this->owner = turnOwner;
};

State_PatientTurn::~State_PatientTurn(){};

void State_PatientTurn::stateLogic(GameController* game){
state_beginning:
    stateRender(game);

    int input; std::cin >> input;
    std::cin.ignore(); std::cin.clear();

    if(owner->hasDoneAction()){
        owner->giveBurden(1);
    }

    stateOptions
        choice = static_cast<stateOptions>(input);

    // Process patient actions
    switch(choice){
        case take_character_action:
            game->setState(owner->getCharacter()->getAbility());
            break;

        case take_room_action:
            game->setState(new Action_DoRoomAction(this));
            break;

        case take_resource_action:
            game->setState(new Action_DoResourceAction(this));
            break;

        case end_turn:
            game->setState(new Action_DrawCard(this));
            game->nextTurn();
            break;
    }

};