//============================================================================
// Name        : c01p04.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	float face;
	float interest;
	float duration;
	float recieve;

	cout << "Insert the amount recieved in dollars. \n$";
	cin >> recieve;

	cout << "Insert the interest percent. \n";
	cin >> interest;
	interest = interest/100;

	cout << "Insert the duration of the payments in years. \n";
	cin >> duration;

	face = (recieve/(1-interest * duration));

	cout << "The face value is $" << face << ". \n";

	face = face/(duration * 12);

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "The amount you will have to pay every month is $" << face << ".\n";

	return 0;
}
