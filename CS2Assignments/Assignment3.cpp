#include <iostream>
#include "Die.h"
#include "DieHand.h"

using namespace std;

int main() {
	srand(time(0));
	Die die1;
	Die die2;
	Die die3;
	Die die4;
	Die die5;

	DieHand myDice[die1, die2, die3, die4, die5];

	cout << myDice.displayDiceHand();
	myDice.rollAllDice();
	cout << myDice.displayDiceHand();
	myDice.rollDie(1);
	myDice.rollDie(5);
	cout << myDice.displayDiceHand();
}