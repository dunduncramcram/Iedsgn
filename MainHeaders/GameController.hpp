
#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "State.hpp"
#include "Director.hpp"

class GameController {
private:
    State* currentState;
    Director* gameDirector;
    
public:
    GameController();
    ~GameController();

    void runApplication();

    void setState(State* newState);
    void setDirector(Director* director);
};

#endif