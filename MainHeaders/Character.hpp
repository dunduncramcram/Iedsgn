
#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include "GameAction.hpp"

class Character {
private:
    std::string
        characterName,
        abilityText;
    GameAction
        characterAbility;

public:
    Character(
        std::string name,
        std::string ability_text
    );
    ~Character();

    GameAction doAction();
    std::string getName();
    std::string getAbilityText();
};

#endif