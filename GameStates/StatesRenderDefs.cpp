
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
