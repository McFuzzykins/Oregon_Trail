#pragma once

#include <iostream>
#include <string>
#include "Utility.h"

using namespace std;

/*
* Function: get string
* Condenses getting user input for a string with error checking into one function
*/
string getString() {
	string temp;
	cout << "Enter: ";
	cin >> temp;
	while (!cin) {
		cout << "ERROR - Bad input try again: ";
		cin.ignore(INT_MAX, '\n');
		cin.clear();
		cin >> temp;
	}
	return temp;
}