
#ifndef PATIENT_H
#define PATIENT_H

#include <iostream>
#include "Player.hpp"
#include "Character.hpp"
#include "Room.hpp"

class Patient : public Player {
private:
    Character* chosenCharacter;
    Room* currentRoom;
    unsigned int burdenCount;
    bool isDead;
    
public:
    Patient(
        std::string name,
        Character* character
    );
    ~Patient();

    Character getCharacter();
    Room getRoom();
    unsigned int getBurden();
    bool isAlive();
};

#endif