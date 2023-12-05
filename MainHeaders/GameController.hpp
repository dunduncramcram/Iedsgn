
#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "State.hpp"
#include "Director.hpp"
#include "Patient.hpp"
#include <vector>

class State;


class GameController {

public:
    enum Teams : unsigned int;

private:
    State* currentState;
    Director* gameDirector;
    std::vector<Patient*> patients;
    unsigned int patient_count;
    Teams gameWinner;

public:

    GameController();
    ~GameController();

    void runApplication();

    Patient* getPatient(unsigned int player_number);
    unsigned int getPatientCount();
    Teams getWinner();

    void setState(State* newState);
    void setDirector(Director* director);
    void setPatientCount(unsigned int count);
    void setWinner(Teams winner);
};

#endif