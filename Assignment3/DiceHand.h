#pragma once

#include <iostream>
#include "Die.h"
using namespace std;

class DieHand
{
private:
	Die* dice[5];
	int const sizeOfHand = 5;
public:
	Die getDie(int dieNum);
	void setDie(int dieNum, int numberOfSides, int faceValue);
	string displayDiceHand();
	void rollDie(int dieNum);
	void rollAllDice();
};