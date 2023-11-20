
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
        int result = mainMenu();

        // Conversion & Error Handling of the result of the Displayed Menu into a Menu Option
        menuOptions choice = static_cast<menuOptions>(result);

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

            case errorDefault:
                break;
        }

        return true;
    }

    menuOptions mainMenu(){

        int result = view->displayMainMenu();

        // Conversion & Error Handling of the result of the Displayed Menu into a Menu Option
        menuOptions choice = static_cast<menuOptions>(result);

        return choice;
    }

    void gameInstructions(){

        int result = view->displayInstructions();

        // Conversion & Error Handling of the result of the Displayed Menu into a Menu Option
        menuOptions choice = static_cast<menuOptions>(result);

        if(choice == backToMain)
            return;

        if(choice == viewDetailed)
            result = view->displayDetailedInstructions();

        // Conversion & Error Handling of the result of the Displayed Menu into a Menu Option
        choice = static_cast<menuOptions>(result);

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
