
#ifndef GAME_ACTION_H
#define GAME_ACTION_H

class GameAction {
public:
    GameAction();
    ~GameAction();
    virtual void doAction();
    virtual bool isDoable();
};

#endif