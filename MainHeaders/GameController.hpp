
#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "State.hpp"

class GameController {
private:
    State* currentState;
public:
    GameController();
    ~GameController();

    void runApplication();

    void setState(State* newState);
};

#endif