
#include "StatesHeader.hpp"
#include <iostream>

using namespace std;

void State_MainMenu::stateRender(GameController* game){
    cout 
        << "Main Menu:" << endl
        << "[1] Start a game" << endl 
        << "[2] See Instructions" << endl
        << "[3] Exit" << endl 
        << "Enter your choice: "
    ;
};

void State_ShowingInstructions::stateRender(GameController* game){
    cout << "Showing Instructions:" << endl;
};

void State_ShowingDetailedInstructions::stateRender(GameController* game){
    cout << "Showing Detailed Instructions:" << endl;
};

void State_ExitingApp::stateRender(GameController* game){
    cout << "Exiting Application..." << endl;
};

void State_NamingDirector::stateRender(GameController* game){
    cout << "Naming Director:" << endl;
};

void State_SummoningMonster::stateRender(GameController* game){
    cout << "Summoning Monster:" << endl;

};

void State_CountingPlayers::stateRender(GameController* game){
    cout << "Counting Players:" << endl;

};

void State_ChoosingCharacters::stateRender(GameController* game){
    cout << "Choosing Characters:" << endl;

};

void State_DealingCards::stateRender(GameController* game){
    cout << "Dealing Cards:" << endl;

};

void State_PatientTurn::stateRender(GameController* game){
    cout << "Patient's Turn:" << endl;

};

void State_ResolvingDilemmas::stateRender(GameController* game){
    cout << "Resolving Dilemmas: " << endl;

};

void State_DirectorTurn::stateRender(GameController* game){
    cout << "Director's Turn:" << endl;
};

void State_HungerPangs::stateRender(GameController* game){
    cout << "Hunger Pangs:" << endl;
};

void State_RoundEnd::stateRender(GameController* game){
    cout << "End Of Round:" << endl;
};

void State_GameOver::stateRender(GameController* game){
    cout << "Game Over" << endl;
};

void State_AskReplay::stateRender(GameController* game){
    cout << "Ask to Replay:" << endl;
};