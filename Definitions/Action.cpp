
#include "../MainHeaders/Action.hpp"
#include <iostream>

enum Action::stateOptions : unsigned int {
    cancel_action, finished_action
};

Action::Action(State* currentState, std::string action_text){
    this->previousState = currentState;
    this->actionText = action_text;
};

Action::~Action(){};

void Action::stateLogic(GameController* game){
state_beginning:
    stateRender();

    int input; std::cin >> input;
    std::cin.ignore(); std::cin.clear();

    stateOptions
        choice = static_cast<stateOptions>(input);

    switch(choice){
        case cancel_action:
            game->setState(previousState);
            break;
        case finished_action:
            actionEffects(game);
            game->setState(previousState);
            break;
    }
};