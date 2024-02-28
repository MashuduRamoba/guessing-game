// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	// Seed the random number generator
	srand(time(0));

	// Generate a random number between 1 and 100
	int randomNum = rand() % 100 + 1;
	int num;
	int count = 0;

	cout << "Welcome to the Number Guessing Game!" << endl;
	

	while (true) {
		cout << "Enter your guess: ";
		cin >> num;
		count++;

		// Check if the guess is correct
		if (num == randomNum) {
			cout << "Congratulations! You guessed the number in " << count<< " guesses." << endl;
			break;
		}
		else if (num < randomNum) {
			cout << "Too low! Try again." << endl;
		}
		else {
			cout << "Too high! Try again." << endl;
		}
	}

	return 0;
}


