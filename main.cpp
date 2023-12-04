
#include "./Definitions/GameController.cpp"
#include "./GameStates/StatesRenderDefs.cpp"
#include "./GameStates/State_MainMenu.cpp"

int main(){
    
    GameController game = GameController();

    game.runApplication();

    return 0;
}