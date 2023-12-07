
#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include "Action.hpp"

class Room {
private:
    std::string 
        roomName,
        actionText;
    Action*
        roomAction;
public:
    Room(   
        std::string room_name,
        Action* room_action
    );
    ~Room();
    
    void doAction();
    std::string getName();
    std::string getActionText();
};

#endif