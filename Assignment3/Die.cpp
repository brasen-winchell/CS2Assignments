#include "Die.h"

int Die::getNumberOfSides() {
	return numberOfSides;
}

int Die::getFaceValue() {
	return faceValue;
}

int Die::setNumberOfSides(int numberOfSides) {
	Die::numberOfSides = numberOfSides;
	return Die::numberOfSides;
}

int Die::setFaceValue(int faceValue) {
	Die::faceValue = faceValue;
	return Die::faceValue;
}

int Die::roll() {
	int result;
	result = setFaceValue(rand() % getNumberOfSides() + 1);
	return result;
}

string Die::dieDescription() {
	string result;
	string numberOfSides;
	string faceValue;
	numberOfSides = getNumberOfSides();
	faceValue = getFaceValue();
	result = "This is a " + numberOfSides + "-sided die with a face value of " + faceValue + "\n";
}