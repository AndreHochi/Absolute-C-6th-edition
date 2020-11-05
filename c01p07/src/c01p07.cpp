//============================================================================
// Name        : c01p07.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	const float kilos = 2.2;

	float weight;
	float mets;
	float time;
	float calories;

	cout << "Give your weight in pounds. \n";
	cin >> weight;

	cout << "Give the METS. \n";
	cin >> mets;

	cout << "Give the amount of time you spent doing the activity. \n";
	cin >> time;

	calories = .0175 * mets / kilos * time * weight;

	cout << " You have burnt " << calories << " calories.";

	return 0;
}
