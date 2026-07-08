#include "Die.h"
#include "DieHand.h"

Die getDie(int dieNum) {
	return dice[dieNum];
}

void setDie(int dieNum, int numberOfSides, int faceValue) {
	dice[dieNum].setNumberOfSides(numberOfSides);
	dice[dieNum].setFaceValue(faceValue);
}
string displayDiceHand() {
	string result;
	for (int i = 0; i < 5; i++) {
		result += dice[i].dieDescription();
	}
	return result;
}
void rollDie(int dieNum) {
	dice[dieNum].roll();
}
void rollAllDice() {
	for (int i = 0; i < 5; i++) {
		dice[i].roll();
	}
}