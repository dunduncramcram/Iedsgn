
#include "ActionsHeader.hpp"
#include "GameController.hpp"

Action_DoRoomAction::Action_DoRoomAction(State* previousState) : Action (
    previousState, 
    "Choose a Room Action:", 
    ""
) {};

Action_DoRoomAction::~Action_DoRoomAction(){};

void Action_DoRoomAction::stateRender(GameController* game){
    
};

void Action_DoRoomAction::stateLogic(GameController* game){
state_beginning:
    Action_MedicalWardAction* medward = new Action_MedicalWardAction(this);
    Action_SecurityRoomAction* security = new Action_SecurityRoomAction(this);
    Action_YardAction* yard = new Action_YardAction(this);

    std::cout <<
        this->actionName << std::endl << 
        "[1] " << medward->getName() << std::endl << 
        "[2] " << security->getName() << std::endl << 
        "[3] " << yard->getName() << std::endl << 
        "[4] Cancel" << std::endl <<
        "Choice: "
    ;

    int input; 
    if(!(std::cin >> input).good()){
        std::cin.ignore(); 
        std::cin.clear();
        goto state_beginning;
    }
    
    switch(input){
        case 1:
            game->setState(medward);
            break;
        case 2:
            game->setState(security);
            break;
        case 3:
            game->setState(yard);
            break;
        case 4:
            game->setState(previousState);
            break;
    };
};

void Action_DoRoomAction::actionEffects(GameController* game){

};
