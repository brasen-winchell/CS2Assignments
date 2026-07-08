#pragma once

#include <iostream>
using namespace std;

class Die
{
private:
	int numberOfSides;
	int faceValue;
public:
	int getNumberOfSides();
	int getFaceValue();
	int setNumberOfSides(int numberOfSides);
	int setFaceValue(int faceValue);
	int roll();
	string dieDescription();
};