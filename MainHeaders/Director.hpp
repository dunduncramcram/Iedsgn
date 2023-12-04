
#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "Player.hpp"
#include <iostream>

class Director : Player {
public:
    Director(
        std::string name
    );
    ~Director();

    std::string getName();
};

#endif