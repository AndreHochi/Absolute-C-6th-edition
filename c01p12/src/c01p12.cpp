//============================================================================
// Name        : c01p12.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int inches;
	int feet;
	int weight;

	cout << "Insert your height in feet and inches, insert your feet first then your height. \n";
	cin >> feet;
	cin >> inches;

	weight = (((feet - 5) * 12 + inches) * 5) + 110;

	cout << "Your ideal weight is " << weight << ". \n";

	return 0;
}
