
#include "StatesHeader.hpp"
#include "../GameActions/ActionsHeader.hpp"

enum State_DirectorTurn::stateOptions : unsigned int {
    filler, summon_monster, recover_dilemma, move_monster, end_turn, 
};

State_DirectorTurn::State_DirectorTurn(){};
State_DirectorTurn::~State_DirectorTurn(){};

void State_DirectorTurn::stateLogic(GameController* game){
state_beginning:
    stateRender(game);

    int input; std::cin >> input;
    std::cin.ignore(); std::cin.clear();

    stateOptions
        choice = static_cast<stateOptions>(input);

    switch(choice){
        case summon_monster:
            game->setState(new Action_SummonMonster(this));
            break;
 
        case recover_dilemma:
            game->setState(new Action_RecoverDilemma(this));
            break;
 
        case move_monster:
            game->setState(new Action_MoveMonster(this));
            break;
 
        case end_turn:
            game->setState(new State_HungerPangs());
            break;
    }
    
};