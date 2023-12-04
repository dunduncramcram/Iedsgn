
#ifndef MONSTER_H
#define MONSTER_H

#include <iostream>

class Monster {
private:
    std::string
        monsterName,
        abilityText;
    
public:
    Monster(
        std::string name,
        std::string ability_text
    );
    ~Monster();

    std::string getName();
    std::string getAbilityText();
};

#endif