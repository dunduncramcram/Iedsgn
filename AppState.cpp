
#include <vector>
#include "Player.cpp"

enum UserActions {
    act_default,
    act_play_game,
    act_how_play,
    act_exit,
    act_detailed_instructions,
    act_back_main,
    act_back_setup,
    act_start_game,
};

enum Menus{
    menu_main,
    menu_instructions,
    menu_detailed_instructions,
    menu_name_director,
    menu_select_monster,
    menu_place_monster,
    menu_ask_player_count,
    menu_character_select,
    menu_before_start,
    menu_win_screen,
};

enum Players{
    
};

class AppState{

private:
    Menus currentMenu = menu_main;
    UserActions userAction = act_default;
    std::vector<Player*> players;
    Player* currentPlayer;
    int playerCount = 0;

public:

    AppState(){
        resetState();
    }

    void resetState(){
        currentMenu = menu_main;
        userAction = act_default;
        playerCount = 0;  

        players.clear();

        players.push_back(new Player(player_director));
        players.push_back(new Player(player_one));
        players.push_back(new Player(player_two));
        players.push_back(new Player(player_three));
        players.push_back(new Player(player_four));
        players.push_back(new Player(player_five));
        players.push_back(new Player(player_six));
        players.push_back(new Player(player_none));
    }

    void setMenu(Menus menu){
        this->currentMenu = menu;
    }

    void setUserAction(UserActions value){
        this->userAction = value;
    }

    UserActions useUserAction(){
        UserActions temp = this->userAction;

        this->userAction = act_default;

        return temp;
    }

    void setPlayerCount(int count){
        this->playerCount = count;
    }

    int getPlayerCount(){
        return this->playerCount;
    }

    void nextPlayer(){
        switch(this->currentPlayer->getID()){
            case player_none:
                this->currentPlayer = players[0];
                break;
            case player_director:
                this->currentPlayer = players[1];
                break;
            case player_one:
                if(playerCount == 1)
                    this->currentPlayer = players[0];
                else
                    this->currentPlayer = players[2];
                break;
            case player_two:
                if(playerCount == 2)
                    this->currentPlayer = players[0];
                else
                    this->currentPlayer = players[3];
                break;
                
            case player_three:
                if(playerCount == 3)
                    this->currentPlayer = players[0];
                else
                    this->currentPlayer = players[4];
                break;
                
            case player_four:
                if(playerCount == 4)
                    this->currentPlayer = players[0];
                else
                    this->currentPlayer = players[5];
                break;
                
            case player_five:
                if(playerCount == 5)
                    this->currentPlayer = players[0];
                else
                    this->currentPlayer = players[6];
                break;

            case player_six:
                this->currentPlayer = players[0];
                break;

            default:
                this->currentPlayer = players[7];
        }
    }

    Player* getCurrentPlayer(){
        return this->currentPlayer;
    }


};
