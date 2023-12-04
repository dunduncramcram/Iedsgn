
#include "../MainHeaders/Patient.hpp"

#include <iostream>

Patient::Patient(
    std::string name,
    Character* character
) : Player(name) {
    this->chosenCharacter = character;
};

Patient::~Patient(){};