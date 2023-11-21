
#ifndef CONTROLLER
#define CONTROLLER

#include "ViewControl.cpp"
#include "AppState.cpp"
#include <iostream>

using namespace std;

class GameController{

private:
    ViewControl* view;
    AppState* state;

public:

    GameController(){
        state = new AppState();
        view = new ViewControl(state);
    }

    void executeApp(){
    
    display_main:
        state->setMenu(menu_main);
        view->updateView();

        switch(state->useUserAction()){
            case act_play_game:
                runGame();
                goto display_main;

            case act_how_play:
                gameInstructions();
                goto display_main;

            case act_exit:
                return;

            default:
                goto display_main;
        }
    }

    void gameInstructions(){

    display_instructions:
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
            state->setMenu(menu_character_select);
            view->updateView();
        }
        // Player Count Ask & Setup

        // Deal Cards to all players & Game Start

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
            case act_replay:
                goto setup;

            case act_back_main:
                return;

            default:
                goto game_finish;
        }
    }


};

#endif
