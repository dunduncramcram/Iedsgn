
#include "../MainHeaders/Action.hpp"
#include <iostream>

enum Action::stateOptions : unsigned int {
    filler, cancel_action, finished_action
};

Action::Action(State* currentState, std::string action_name, std::string action_text){
    this->previousState = currentState;
    this->isCancellable = true;
    this->actionName = action_name;
    this->actionText = action_text;
};

Action::Action(State* currentState, bool canBeCancelled, std::string action_name, std::string action_text){
    this->previousState = currentState;
    this->isCancellable = canBeCancelled;
    this->actionName = action_name;
    this->actionText = action_text;
};

Action::~Action(){};

void Action::stateRender(GameController* game){
    std::cout <<
        this->actionName << std::endl;

    std::cout <<
        this->actionText << std::endl;

    std::cout <<
        "[" << cancel_action <<"] Cancel" << std::endl <<
        "[" << finished_action << "] Finished" << std::endl <<
        "Choice: " << std::endl
    ;
};

void Action::stateLogic(GameController* game){
state_beginning:
    stateRender(game);

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

std::string Action::getName(){
    return this->actionName;
};