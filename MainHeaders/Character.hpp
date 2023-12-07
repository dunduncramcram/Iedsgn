
#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include "Action.hpp"

class Character {
private:
    std::string
        characterName;
    Action*
        characterAbility;

public:
    Character(
        std::string name,
        Action* ability
    );
    ~Character();

    std::string getName();
    Action* getAbility();
};

#endif