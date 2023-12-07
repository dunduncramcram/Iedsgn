
#include "StatesHeader.hpp"
#include<iostream>
#include<stdlib.h> /*system("CLS");*/
#include<conio.h> /*_getch();*/
#include<vector>

#include"Characters.hpp"

using namespace std;

enum State_ChoosingCharacters::stateOptions : unsigned int {
    
};

State_ChoosingCharacters::State_ChoosingCharacters(){};
State_ChoosingCharacters::~State_ChoosingCharacters(){};

void State_ChoosingCharacters::stateLogic(GameController* game){
state_beginning:
    stateRender(game);
    
vector<Character> char;

Ability ability = new Action_DebtCollectorsAbility(*(game->getCurrentState()));
Character character = new Character("Debt Collector", &ability);
char->push_back(character);

ability = new Action_FathersAbility(*(game->getCurrentState()));
character = new Character("Father", &ability);
char->push_back(character);

ability = new Action_JournalistsAbility(*(game->getCurrentState()));
character = new Character("Journalist", &ability);
char->push_back(character);

ability = new Action_PastorsAbility(*(game->getCurrentState()));
character = new Character("Pastor", &ability);
char->push_back(character);

ability = new Action_StudentsAbility(*(game->getCurrentState()));
character = new Character("Student", &ability);
char->push_back(character);

ability = new Action_VeteransAbility(*(game->getCurrentState()));
character = new Character("Veteran", &ability);
char->push_back(character);

char input;
string name;
int i, j = -1;
unsigned int numPatient = game->getPatientCount();

for (i = 0; i < numPatient; i++) {
	int numCharacters = char->getsize();

	cout << "What's your name?"; cin >> name;
	cout << endl;

	do {
		if (j = numCharacters - 1) j = 0;
		else j++;

		system("CLS");

		cout << endl << "Player " << i+1 << endl;
		cout << "Play as this character?" << endl;
		cout << "(Press q to select, otherwise press any key)" << endl << endl;
		cout << "Character: " << char[j]->getName() << endl;
		input = _getch();

	} while (input != 'q' && input != 'Q');

	Patient patient = new Patient(name, characters[j]);
	patients->push_back(&patient);

	characters->erase(j);
}
    
    game->setState(new State_DealingCards());
};
