
#include "ActionsHeader.hpp"
#include "GameController.hpp"

Action_TargetPatient::Action_TargetPatient(State* previousState) : Action (
    previousState, 
    "Choose a Patient:", 
    ""
) {};

Action_TargetPatient::~Action_TargetPatient(){};

void Action_TargetPatient::stateRender(GameController* game){
    std::cout <<
        this->actionName << std::endl;

    unsigned int patientCount = game->getPatientCount();

    for(unsigned int i = 1; i <= patientCount; i++)
        std::cout <<
            "[" << i << "] " << game->getPatient(i)->getName() << std::endl;

    std::cout <<
        "Choice: ";
};

void Action_TargetPatient::stateLogic(GameController* game){
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

Patient* Action_TargetPatient::getSelected(){
    return this->selectedPlayer;
};

void Action_TargetPatient::actionEffects(GameController* game){

};
