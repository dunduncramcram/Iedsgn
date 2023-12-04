
#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include "GameAction.hpp"

class Room {
private:
    std::string 
        roomName,
        actionText;
    GameAction
        roomAction;
public:
    Room(   
        std::string room_name,
        std::string action_text,
        GameAction room_action
    );
    ~Room();
    
    void doAction();
    std::string getName();
    std::string getActionText();
};

#endif