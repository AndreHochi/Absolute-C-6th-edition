//============================================================================
// Name        : c01p10.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	float acceleration = 32;
	float time;
	float distance;

	cout << "Give the amount of time the object was in the air in seconds. \n";
	cin >> time;

	distance = .5 * acceleration * time * time;

	cout << "Your object traveled " << distance << " feet.";

	return 0;
}
