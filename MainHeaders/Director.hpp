
#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "Player.hpp"
#include <iostream>

class Director {
private:
    std::string directorName;
    
public:
    Director(
        std::string name
    );
    ~Director();

    std::string getName();
};

#endif