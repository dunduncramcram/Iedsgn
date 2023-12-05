
#include "StatesHeader.hpp"
#include "../Definitions/Director.cpp"

enum State_RoundEnd::stateOptions : unsigned int {
    deck_empty, deck_not_empty
};

State_RoundEnd::State_RoundEnd(){};
State_RoundEnd::~State_RoundEnd(){};

void State_RoundEnd::stateLogic(GameController* game){
state_beginning:
    stateRender();

    int input; std::cin >> input;
    std::cin.ignore(); std::cin.clear();

    stateOptions
        choice = static_cast<stateOptions>(input);

    switch(choice){
        case deck_empty:
            game->patientsWin();
            return;
        case deck_not_empty:
            break;
        default:
            return;
    }

    unsigned int patientCount = game->getPatientCount();

    for(int patient_num = 1; patient_num <= patientCount; patient_num++){
        if(game->getPatient(patient_num)->isAlive()){
            game->nextTurn();
            return;
        }
    }

    game->directorWin();
    return;

};