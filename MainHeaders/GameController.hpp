
#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "State.hpp"
#include "Director.hpp"
#include "Patient.hpp"
#include <vector>

class State;


class GameController {

public:
    enum Turns : unsigned int;
    enum Teams : unsigned int;

private:
    State* currentState;
    Director* gameDirector;
    std::vector<Patient*> patients;
    unsigned int patient_count;
    Turns current_turn;
    Teams gameWinner;

public:

    GameController();
    ~GameController();

    void runApplication();
    void nextTurn();
    void resetGameSetup();

    void directorWin();
    void patientsWin();

    Patient* getPatient(unsigned int player_number);
    unsigned int getPatientCount();
    Teams getWinner();

    void setState(State* newState);
    void setDirector(Director* director);
    void setPatientCount(unsigned int count);
};

#endif