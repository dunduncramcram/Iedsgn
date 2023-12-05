
#ifndef GAME_STATES_H
#define GAME_STATES_H

#include "../MainHeaders/State.hpp"

class State_MainMenu : public State { 
private:
    enum stateOptions : unsigned int;
public:
    State_MainMenu();
    ~State_MainMenu();
    void stateLogic(GameController* game);
    void stateRender();
};

class State_ShowingInstructions : public State {
private:
    enum stateOptions : unsigned int;
public:
    State_ShowingInstructions();
    ~State_ShowingInstructions();
    void stateLogic(GameController* game);
    void stateRender();
};

class State_ShowingDetailedInstructions : public State {
private:
    enum stateOptions : unsigned int;
public:
    State_ShowingDetailedInstructions();
    ~State_ShowingDetailedInstructions();
    void stateLogic(GameController* game);
    void stateRender();
};

class State_ExitingApp : public State {
private:
    enum stateOptions : unsigned int;
public:
    State_ExitingApp();
    ~State_ExitingApp();
    void stateLogic(GameController* game);
    void stateRender();
};

class State_NamingDirector : public State {
private:
    enum stateOptions : unsigned int;
    bool namedDirector;

public:
    State_NamingDirector();
    ~State_NamingDirector();
    void stateLogic(GameController* game);
    void stateRender();
};

class State_SummoningMonster : public State {
private:
    enum stateOptions : unsigned int;
    State* lastState;

public:
    State_SummoningMonster(State* currentState);
    ~State_SummoningMonster();
    void stateLogic(GameController* game);
    void stateRender();
};

class State_CountingPlayers : public State {
private:
    enum stateOptions : unsigned int;
public:
    State_CountingPlayers();
    ~State_CountingPlayers();
    void stateLogic(GameController* game);
    void stateRender();
};

class State_ChoosingCharacters : public State {
private:
    enum stateOptions : unsigned int;
public:
    State_ChoosingCharacters();
    ~State_ChoosingCharacters();
    void stateLogic(GameController* game);
    void stateRender();
};

class State_DealingCards : public State {
private:
    enum stateOptions : unsigned int;
public:
    State_DealingCards();
    ~State_DealingCards();
    void stateLogic(GameController* game);
    void stateRender();
};

class State_PatientTurn : public State {
private:
    enum stateOptions : unsigned int;
    Patient* owner;

public:
    State_PatientTurn(Patient* turnOwner);
    ~State_PatientTurn();
    void stateLogic(GameController* game);
    void stateRender();
};

class State_ResolvingDilemmas : public State {
private:
    enum stateOptions : unsigned int;
public:
    State_ResolvingDilemmas();
    ~State_ResolvingDilemmas();
    void stateLogic(GameController* game);
    void stateRender();
};

class State_DirectorTurn : public State {
private:
    enum stateOptions : unsigned int;
public:
    State_DirectorTurn();
    ~State_DirectorTurn();
    void stateLogic(GameController* game);
    void stateRender();
};

class State_HungerPangs : public State {
private:
    enum stateOptions : unsigned int;
public:
    State_HungerPangs();
    ~State_HungerPangs();
    void stateLogic(GameController* game);
    void stateRender();
};

class State_RoundEnd : public State {
private:
    enum stateOptions : unsigned int;
public:
    State_RoundEnd();
    ~State_RoundEnd();
    void stateLogic(GameController* game);
    void stateRender();
};

class State_GameOver : public State {
private:
    enum stateOptions : unsigned int;
public:
    State_GameOver();
    ~State_GameOver();
    void stateLogic(GameController* game);
    void stateRender();
};

class State_AskReplay : public State {
private:
    enum stateOptions : unsigned int;
public:
    State_AskReplay();
    ~State_AskReplay();
    void stateLogic(GameController* game);
    void stateRender();
};

#endif