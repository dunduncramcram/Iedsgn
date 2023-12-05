
#include "StatesHeader.hpp"
#include <iostream>

using namespace std;

void State_MainMenu::stateRender(){
    cout << "Main Menu:" << endl ;
};

void State_ShowingInstructions::stateRender(){
    cout << "Showing Instructions:" << endl;
};

void State_ShowingDetailedInstructions::stateRender(){
    cout << "Showing Detailed Instructions:" << endl;
};

void State_ExitingApp::stateRender(){
    cout << "Exiting Application..." << endl;
};

void State_NamingDirector::stateRender(){
    cout << "Naming Director:" << endl;
};

void State_SummoningMonster::stateRender(){
    cout << "Summoning Monster:" << endl;

};

void State_CountingPlayers::stateRender(){
    cout << "Counting Players:" << endl;

};

void State_ChoosingCharacters::stateRender(){
    cout << "Choosing Characters:" << endl;

};

void State_DealingCards::stateRender(){
    cout << "Dealing Cards:" << endl;

};

void State_PatientTurn::stateRender(){
    cout << "Patient's Turn:" << endl;

};

void State_ResolvingDilemmas::stateRender(){
    cout << "Resolving Dilemmas: " << endl;

};

void State_DirectorTurn::stateRender(){
    cout << "Director's Turn:" << endl;
};

void State_HungerPangs::stateRender(){
    cout << "Hunger Pangs:" << endl;
};

void State_RoundEnd::stateRender(){
    cout << "End Of Round:" << endl;
};

void State_GameOver::stateRender(){
    cout << "Game Over" << endl;
};

void State_AskReplay::stateRender(){
    cout << "Ask to Replay:" << endl;
};