
#include "GameController.cpp"

class ViewControl {

private:

    AppState* state;

public:
    ViewControl(AppState* appState){
        this->state = appState;
    }

    void updateView(){
        // logic for which view is drawn based on conditions of the appstate
    }

    void displayMainMenu(){

        state->setUserAction(act_default);
    }

    void displayInstructions(){

        state->setUserAction(act_default);
    }
  
    void displayDetailedInstructions(){

        state->setUserAction(act_default);
    }
};
