
#include "../MainHeaders/Patient.hpp"

#include <iostream>

Patient::Patient(
    std::string name,
    Character* character
) : Player(name) {
    this->chosenCharacter = character;
    isDead = false;
    hasTakenAction = false;
};

Patient::~Patient(){};

void Patient::giveBurden(unsigned int amount){
    this->burdenCount += amount;

    if(this->burdenCount >= 5)
        this->isDead = true;
};

void Patient::healBurden(unsigned int amount){
    if(static_cast<int>(this->burdenCount) - amount < 0)
        this->burdenCount = 0;
    else
        this->burdenCount -= amount;
};

void Patient::revive(unsigned int toBurdenAmt){
    if(!isDead)
        return;

    this->isDead = false;
    this->burdenCount = toBurdenAmt;
};

bool Patient::isAlive(){
    return !(this->isDead);
};

bool Patient::hasDoneAction(){
    return hasTakenAction;
}

Character* Patient::getCharacter(){
    return this->chosenCharacter;
}