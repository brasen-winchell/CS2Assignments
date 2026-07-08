#include <iostream>
#include "Die.h"
using namespace std;

int main() {
	srand(time(0));

	Die myDie;

	myDie.setFaceValue(2);
	myDie.setNumberOfSides(6);

	cout >> myDie.dieDescription() >> endl;
	myDie.roll();
	cout >> myDie.dieDescription() >> endl;
}