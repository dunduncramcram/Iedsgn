
#include "../MainHeaders/GameController.hpp"
#include "../MainHeaders/State.hpp"
#include "../GameStates/StatesHeader.hpp"
#include <iostream>

enum GameController::Turns : unsigned int {
    director_turn = 0, 
    patient_1_turn, patient_2_turn, patient_3_turn, 
    patient_4_turn, patient_5_turn, patient_6_turn,
};

enum GameController::Teams : unsigned int {
    team_director, team_patients
};

GameController::GameController(){
    this->currentState = new State_MainMenu();
    this->monsterDamage = 1;
};

GameController::~GameController(){};

void GameController::runApplication(){
    while (true) 
        this->currentState->stateLogic(this);
};

void GameController::runState(){
    this->currentState->stateLogic(this);
}

void GameController::nextTurn(){
    if(current_turn == director_turn){
        this->current_turn = patient_1_turn;
        this->setState(new State_PatientTurn(getPatient(current_turn)));
    } else if (current_turn == patient_count){
        this->current_turn = director_turn;
        this->setState(new State_ResolvingDilemmas());
    } else {
        this->current_turn = static_cast<Turns>(current_turn + 1);
        this->setState(new State_PatientTurn(getPatient(current_turn)));
    }
};

void GameController::resetGameSetup(){
    this->current_turn = director_turn;
};

void GameController::directorWin(){
    this->gameWinner = team_director;
    this->setState(new State_GameOver());
};

void GameController::patientsWin(){
    this->gameWinner = team_patients;
    this->setState(new State_GameOver());
};

Patient* GameController::getPatient(unsigned int player_number){
    if(player_number > this->patient_count || player_number == 0 || player_number > patients.size())
        return NULL;

    return this->patients[player_number - 1];
};

Patient* GameController::getTurnPatient(){
    return this->patients[current_turn];
};

unsigned int GameController::getPatientCount(){
    return this->patient_count;
};

GameController::Teams GameController::getWinner(){
    return this->gameWinner;
};

unsigned int GameController::getMonsterDamage(){
    return this->monsterDamage;
}

void GameController::setState(State* newState){
    this->currentState = newState;
};

void GameController::setDirector(Director* director){
    this->gameDirector = director;
};

void GameController::setPatientCount(unsigned int count){
    this->patient_count = count;

    while(count < patients.size())
        patients.erase(patients.begin());
};


void GameController::setMonsterDamage(unsigned int amount){
    this->monsterDamage = amount;
};


/*
private:
    //ViewControl* view;
    //AppState* state;

public:

    GameController(){
    //    state = new AppState();
    //    view = new ViewControl(state);
    }

    void executeApp(){
    
        
    }

    void gameInstructions(){

    display_instructions:
    /*
        state->setMenu(menu_instructions);
        view->updateView();
    
        switch(state->useUserAction()){
            case act_detailed_instructions:
                goto display_detailed_instructions;
            case act_back_main:
                return;
            default:
                goto display_instructions;
        }

    display_detailed_instructions:
        state->setMenu(menu_detailed_instructions);
        view->updateView();

        switch(state->useUserAction()){
            case act_back_main:
                return;
            default:
                goto display_detailed_instructions;
        }
    
    }

    void runGame(){

    setup:
    /*
        state->setMenu(menu_name_director);
        view->updateView();

        // Intake Director Name and send to the state

        state->setMenu(menu_select_monster);
        view->updateView();

        // Add Monster to the list of monsters in the state

        state->setMenu(menu_place_monster);
        view->updateView();

        state->setMenu(menu_ask_player_count);
        view->updateView();
        
        state->setMenu(menu_ask_player_count);
        view->updateView();

        // Get Player Count

        int count = state->getPlayerCount();
        for(int i = 0; i < count; i++){
            state->nextPlayer();
            state->setMenu(menu_character_select);
            view->updateView();

            // Get A Player's Name and the Player's Chosen Character
        }

        state->setMenu(menu_before_start);
        view->updateView();

        // Place Player Pieces & Deal Cards to all players & Game Start
        // Option to quit here, redo or to play the game

        switch(state->useUserAction()){
            case act_back_main:
                return;
            case act_back_setup:
                goto setup;
            case act_start_game:
                goto gameplay;
            default:
                goto setup;
        }

    gameplay:
        // Continually check if all players are dead to kick to end of game

        // Process a Turn
            // Process movement
            // Process Actions
            // Process Draw

        // Process Director Turn
            // Process Roll
            // Process actions/movement

        // Process a round
            // Process Dilemma Resolution 
                // Process in turn order
            // Process Hunger Pangs
                // Process in turn order

        // Check for finished deck, if not loop, if yes end game

    game_finish:
        state->setMenu(menu_win_screen);
        view->updateView();

        switch(state->useUserAction()){
            case act_back_setup:
                goto setup;

            case act_back_main:
                return;

            default:
                goto game_finish;
        }
    }


};
    
*/

