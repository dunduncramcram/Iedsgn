
#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "Character.hpp"
#include "Room.hpp"

class Player {
private:
    std::string playerName;
    Character chosenCharacter;
    Room currentRoom;
    unsigned int burdenCount;
    bool isDead;
    
public:
    Player(
        std::string name,
        Character character
    );
    ~Player();

    std::string getName();
    Character getCharacter();
    Room getRoom();
    unsigned int getBurden();
    bool isAlive();
};

#endif