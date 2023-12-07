
#include "ActionsHeader.hpp"
#include "GameController.hpp"

Action_DoRoomAction::Action_DoRoomAction(State* previousState) : Action (
    previousState, 
    "Choose a Room Action:", 
    ""
) {};

Action_DoRoomAction::~Action_DoRoomAction(){};

void Action_DoRoomAction::stateRender(GameController* game){

    Action_MedicalWardAction* medward = new Action_MedicalWardAction(this);
    Action_SecurityRoomAction* security = new Action_SecurityRoomAction(this);
    Action_YardAction* yard = new Action_YardAction(this);

    std::cout <<
        this->actionName << std::endl << 
        "[1] " << medward->getTitle() << std::endl << 
        this->actionName << std::endl << 
        this->actionName << std::endl << 

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
