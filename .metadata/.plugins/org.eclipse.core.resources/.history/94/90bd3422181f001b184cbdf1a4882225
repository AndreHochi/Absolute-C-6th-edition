//============================================================================
// Name        : c01p08.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	float number;
	float guess;
	float r;

	int n;

	cout << "Give the number to be square rooted. \n";
	cin >> number;

	guess = number / 2;

	for (n = 1; n <= 5; n++) {
		r = number / guess;
		guess = (guess + r) / 2;
	}

	cout << "The square root is " << guess << ".";

	return 0;
}
