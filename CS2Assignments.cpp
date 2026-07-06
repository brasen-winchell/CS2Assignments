// CS2Assignments.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void displayIntArray(int* nums, int size);

int* makeIntArray(int size);

int main()
{
    int age = 109;
    int* agePtr = &age;
    string name = "Jon";
    string* namePtr = &name;
    int array[] = { 10, 20, 30, 40, 50 };
    int numbers = 0;

    cout << "Name: " << *namePtr << endl;
    cout << "Age: " << *agePtr << endl;
    displayIntArray(array, 5);
    cout << "How many numbers? ";
    cin >> numbers;
    displayIntArray(makeIntArray(numbers), numbers);
}

void displayIntArray(int *nums, int size)
{
    cout << "Your numbers were: " << endl;
    for (int i = 0; i < size; i++) {
        cout << endl << *nums++ << endl;
    }
}

int* makeIntArray(int size)
{
    int* intArray = new int[size];

    for (int i = 0; i < size; i++) {
        cout << endl << "Give me an int: ";
        cin >> intArray[i];
    }

    return intArray;
}
