
#include "../MainHeaders/Player.hpp"

Player::Player(
    std::string name
) {
    this->playerName = name;
};

Player::~Player(){};

std::string Player::getName(){
    return "Temp Player Name";
    
    //return this->playerName;
};