
#include "StatesHeader.hpp"
#include <iostream>

using namespace std;

void State_MainMenu::stateRender(GameController* game){
    system("cls");
    cout << "__ __ __ __ __ __ __ __ __ __" << endl
        << " _                           " << endl
        << "|_)  _     _ |_   _   _ o  _ " << endl
        << "|   _> \// (_ | | (_) _> | _> " << endl
        << "       //                     " << endl  
        << "__ __ __ __ __ __ __ __ __ __" << endl << endl
        << "[1] Start a game" << endl
        << "[2] See Instructions" << endl
        << "[3] Exit" << endl
        << "Enter your choice: "
        ;
};

void State_ShowingInstructions::stateRender(GameController* game){
    system("cls");
    cout << "__ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << "___                                       " << endl
        << " |  ._   _ _|_ ._      _ _|_ o  _  ._   _ " << endl
        << "_|_ | | _>  |_ |  |_| (_  |_ | (_) | | _> " << endl
        << "__ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << endl
        ;
    //cout << "Showing Instructions:" << endl;
};

void State_ShowingDetailedInstructions::stateRender(GameController* game){
    system("cls");
    cout << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << " _                            ___                                       " << endl
        << "| \  _  _|_  _. o |  _   _|    |  ._   _ _|_ ._      _ _|_ o  _  ._   _ " << endl
        << "|_// (//_  |_ (_| | | (//_ (_|   _|_ | | _>  |_ |  |_| (_  |_ | (_) | | _> " << endl
        << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << endl
        ;
    //cout << "Showing Detailed Instructions:" << endl;
};

void State_ExitingApp::stateRender(GameController* game){
    system("cls");
    cout << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << " _                                                            " << endl
        << "|_    o _|_ o ._   _     //\  ._  ._  | o  _  _. _|_ o  _  ._  " << endl
        << "|_ >< |  |_ | | | (_|   //--\ |_) |_) | | (_ (_|  |_ | (_) | | " << endl
        << "                   _|        |   |                            " << endl
        << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << endl
        ;
    //cout << "Exiting Application..." << endl;
};

void State_NamingDirector::stateRender(GameController* game){
    system("cls");
    cout << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << "                            _                         " << endl
        << "|\ |  _. ._ _  o ._   _    | \ o ._  _   _ _|_  _  ._ " << endl
        << "| \| (_| | | | | | | (_|   |_// | |  (//_ (_  |_ (_) |  " << endl
        << "                      _|                              " << endl           
        << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << endl
        ;
    //cout << "Naming Director:" << endl;
};

void State_SummoningMonster::stateRender(GameController* game){
    system("cls");
    cout << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << " __                                                                " << endl
        << "(_      ._ _  ._ _   _  ._  o ._   _    |\//|  _  ._   _ _|_  _  ._ " << endl
        << "__) |_| | | | | | | (_) | | | | | (_|   |  | (_) | | _>  |_ (//_ |  " << endl
        << "                                   _|                              " << endl
        << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << endl
        ;
    //cout << "Summoning Monster:" << endl;

};

void State_CountingPlayers::stateRender(GameController* game){
    system("cls");
    cout << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << "_                              _" << endl
        << "//   _      ._  _|_ o ._   _    |_) |  _.     _  ._  _ " << endl
        << "\_ (_) |_| | |  |_ | | | (_|   |   | (_| \// (//_ |  _> " << endl
        << "                          _|             //            " << endl
        << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << endl
        ;
    //cout << "Counting Players:" << endl;
};

void State_ChoosingCharacters::stateRender(GameController* game){
    system("cls");
    cout << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << " _                             _                                 " << endl
        << "//  |_   _   _   _ o ._   _    //  |_   _. ._  _.  _ _|_  _  ._  _ " << endl
        << "\_ | | (_) (_) _> | | | (_|   \_ | | (_| |  (_| (_  |_ (//_ |  _> " << endl
        << "                         _|                                      " << endl
        << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << endl
        ;
    //cout << "Choosing Characters:" << endl;

};

void State_DealingCards::stateRender(GameController* game){
    system("cls");
    cout << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << " _                         _               " << endl
        << "| \  _   _. | o ._   _    //   _. ._  _|  _ " << endl
        << "|_// (//_ (_| | | | | (_|   \_ (_| |  (_| _> " << endl
        << "                     _|                    " << endl
        << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << endl
        ;
    //cout << "Dealing Cards:" << endl;
};

void State_PatientTurn::stateRender(GameController* game){
    system("cls");
    cout << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << " _                               ___            " << endl
        << "|_)  _. _|_ o  _  ._  _|_ //  _    |      ._ ._  " << endl
        << "|   (_|  |_ | (//_ | |  |_   _>    |  |_| |  | | " << endl
        << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << endl
        ;
    //cout << "Patient's Turn:" << endl;

};

void State_ResolvingDilemmas::stateRender(GameController* game){
    system("cls");
    cout << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << " _                               _                             " << endl
        << "|_)  _   _  _  |    o ._   _    | \ o |  _  ._ _  ._ _   _.  _ " << endl
        << "| \ (//_ _> (_) | \// | | | (_|   |_// | | (//_ | | | | | | (_| _> " << endl
        << "                           _|                                  " << endl
        << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << endl
        ;
    //cout << "Resolving Dilemmas: " << endl;

};

void State_DirectorTurn::stateRender(GameController* game){
    system("cls");
    cout << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << " _                                ___            " << endl
        << "| \ o ._  _   _ _|_  _  ._ //  _    |      ._ ._  " << endl
        << "|_// | |  (//_ (_  |_ (_) |    _>    |  |_| |  | | " << endl
        << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << endl
        ;
    //cout << "Director's Turn:" << endl;
};

void State_HungerPangs::stateRender(GameController* game){
    system("cls");
    cout << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << "                          _                 " << endl
        << "|_|     ._   _   _  ._   |_)  _. ._   _   _ " << endl
        << "| | |_| | | (_| (/_ |    |   (_| | | (_| _> " << endl
        << "             _|                       _|    " << endl
        << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << endl
        ;
    //cout << "Hunger Pangs:" << endl;
};

void State_RoundEnd::stateRender(GameController* game){
    system("cls");
    cout << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << " _            _    _    _                  " << endl
        << "|_ ._   _|   // \ _|_   |_)  _      ._   _| " << endl
        << "|_ | | (_|   \_//  |    | \ (_) |_| | | (_| " << endl
        << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << endl
        ;
    //cout << "End Of Round:" << endl;
};

void State_GameOver::stateRender(GameController* game){
    system("cls");
    cout << "__ __ __ __ __ __ __ __ __ __ __ __" << endl
        << " __                  _            " << endl
        << "//__  _. ._ _   _    // \     _  ._ " << endl
        << "\_| (_| | | | (//_   \_// \// (//_ |  " << endl
        << "__ __ __ __ __ __ __ __ __ __ __ __" << endl
        << endl
        ;
    //cout << "Game Over" << endl;
};

void State_AskReplay::stateRender(GameController* game){
    system("cls");
    cout << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << "             ___        _                   " << endl
        << " //\   _ |     |   _    |_)  _  ._  |  _.    " << endl
        << "//--\ _> |<    |  (_)   | \ (//_ |_) | (_| \// " << endl
        << "                               |         //  " << endl
        << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl
        << endl
        ;
    //cout << "Ask to Replay:" << endl;
};
