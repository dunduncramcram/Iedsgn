
enum PlayerIDs{
    player_none,
    player_director,
    player_one,
    player_two,
    player_three,
    player_four,
    player_five,
    player_six,
};

class Player{

private:
    PlayerIDs playerID = player_none;

public:

    Player(PlayerIDs id){
        this->playerID = player_none;
        this->playerID = id;
    };

    PlayerIDs getID(){
        return this->playerID;
    }
};
