
#include "../MainHeaders/Action.hpp"

enum Action::stateOptions : unsigned int {
    cancel_action, finished_action
};

Action::Action(State* currentState, std::string action_text){

};

Action::Action(State* currentState, std::string action_text){
    this->previousState = currentState;
    this->actionText = action_text;
};

Action::~Action(){};

Action::stateLogic(GameController* game){

};

class Action : public State {
protected:
    enum stateOptions : unsigned int;

    std::string actionText;
public:
    Action(std::string action_text);
    ~Action();
    void stateLogic(GameController* game);
};
