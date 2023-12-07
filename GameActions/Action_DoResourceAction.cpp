
#include "ActionsHeader.hpp"
#include "GameController.hpp"

Action_DoResourceAction::Action_DoResourceAction(State* previousState) : Action (
    previousState, 
    "Choose a Resource Action:", 
    ""
) {};

Action_DoResourceAction::~Action_DoResourceAction(){};

void Action_DoResourceAction::stateRender(GameController* game){
    
};

void Action_DoResourceAction::stateLogic(GameController* game){
state_beginning:
    Action_JunkDiscard* junkDiscard = new Action_JunkDiscard(this);
    Action_JunkRecover* junkRecover = new Action_JunkRecover(this);
    Action_MedkitHeal* medkitHeal = new Action_MedkitHeal(this);
    Action_MedkitRevive* medkitRevive = new Action_MedkitRevive(this);

    std::cout <<
        this->actionName << std::endl << 
        "[1] " << junkDiscard->getName() << std::endl << 
        "[2] " << junkRecover->getName() << std::endl << 
        "[3] " << medkitHeal->getName() << std::endl << 
        "[4] " << medkitRevive->getName() << std::endl << 
        "[5] Cancel" << std::endl <<
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
            game->setState(junkDiscard);
            break;
        case 2:
            game->setState(junkRecover);
            break;
        case 3:
            game->setState(medkitHeal);
            break;
        case 4:
            game->setState(medkitRevive);
            break;
        case 5:
            game->setState(previousState);
            break;
    };
};

void Action_DoRoomAction::actionEffects(GameController* game){

};
