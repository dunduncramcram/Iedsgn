
#include "ActionsHeader.hpp"
#include "GameController.hpp"

Action_DoRoomAction::Action_DoRoomAction(State* previousState) : Action (
    previousState, 
    "Choose a Room Action:", 
    ""
) {};

Action_DoRoomAction::~Action_DoRoomAction(){};

void Action_DoRoomAction::stateRender(GameController* game){
    std::cout <<
        this->actionName << std::endl;

    unsigned int patientCount = game->getPatientCount();

    for(unsigned int i = 1; i <= patientCount; i++)
        std::cout <<
            "[" << i << "] " << game->getPatient(i)->getName() << std::endl;

    std::cout <<
        "Choice: ";
};

void Action_DoRoomAction::stateLogic(GameController* game){
state_beginning:
    stateRender(game);

    int input; 
    if(!(std::cin >> input).good()){
        std::cin.ignore(); 
        std::cin.clear();
        goto state_beginning;
    }
    
    this->selectedPlayer = game->getPatient(input);
    game->setState(previousState);
};

void Action_DoRoomAction::actionEffects(GameController* game){

};
