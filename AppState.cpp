
enum UserActions {
    act_default,
    act_play_game,
    act_how_play,
    act_exit,
    act_detailed_instructions,
    act_back_main,
    act_replay,
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
    menu_place_character,
    menu_win_screen,
};

enum Players{
    player_none,
    player_director,
    player_one,
    player_two,
    player_three,
    player_four,
    player_five,
    player_six,
};

class AppState{

private:
    Menus currentMenu = menu_main;
    UserActions userAction = act_default;
    Players currentPlayer = player_none;
    int playerCount = 0;

public:

    AppState(){
        resetState();
    }

    void resetState(){
        currentMenu = menu_main;
        userAction = act_default;
        currentPlayer = player_none;
        playerCount = 0;  
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
        switch(this->currentPlayer){
            case player_none:
            case player_director:
            case player_one:
            case player_two:
            case player_three:
            case player_four:
            case player_five:
            case player_six:

        }



        this->currentPlayer;
    }

    Players getCurrentPlayer(){
        return this->currentPlayer;
    }


};
