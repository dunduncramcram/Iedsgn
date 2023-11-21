
enum menuOptions {
    errorDefault = 0,
    playGame = 1,
    howToPlay = 2,
    exitGame = 3,
    viewDetailed = 1,
    backToMain = 2,
};

#ifndef CONTROLLER
#define CONTROLLER

#include "ViewControl.cpp"
#include <iostream>

using namespace std;

class GameController{

private:
    ViewControl* view;

public:

    GameController(){
        view = new ViewControl();
    }

    bool executeApp(){
        int result;
        
    display_main:
        result = view->displayMainMenu();

        // Conversion & Error Handling of the result of the Displayed Menu into a Menu Option
        menuOptions choice = static_cast<menuOptions>(result);
        if(choice == errorDefault) goto display_main;

        switch(choice){
            case playGame:
                runGame();
                break;

            case howToPlay:
                gameInstructions();
                break;

            case exitGame:
                return false;
                break;
        }

        return true;
    }

    void gameInstructions(){

        int result;

    display_instructions:
        result = view->displayInstructions();

        // Conversion & Error Handling of the result of the Displayed Menu into a Menu Option
        menuOptions choice = static_cast<menuOptions>(result);
        if(choice == errorDefault) goto display_instructions;

        if(choice == backToMain)
            return;

    detailed_instructions:
        result = view->displayDetailedInstructions();

        // Conversion & Error Handling of the result of the Displayed Menu into a Menu Option
        choice = static_cast<menuOptions>(result);
        if(choice == errorDefault) goto detailed_instructions;

        if(choice == backToMain)
            return;
    }

    void runGame(){

        int result;

        // Conversion & Error Handling of the result of the Displayed Menu into a Menu Option
        menuOptions choice = static_cast<menuOptions>(result);
        
    }

};

#endif
