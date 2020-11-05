//============================================================================
// Name        : c01p06.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	const float hourly = 16.78;
	const float overtime = 1.5;
	const float union_dues = 10;
	const float dependent_withhold = 35;
	const float max_hours = 40;

	float social = .06;
	float federal = .14;
	float state = .05;

	float hours_worked;
	float dependents;
	float sum_payment;

	cout << "Give the number of hours worked. ";
	cin >> hours_worked;

	cout << "Give the number of dependents. ";
	cin >> dependents;

	if (hours_worked > max_hours) {
		sum_payment = hourly * max_hours + hourly * overtime * (hours_worked - max_hours);
	}
	else {
		sum_payment = hourly * max_hours;
	}

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "The gross payment is $" << sum_payment << ".\n";

	social = sum_payment * social;
	cout << "The amount due for social security is $" << social <<".\n";

	federal = sum_payment * federal;
	cout << "The amount due for federal tax is $" << federal << ".\n";

	state = sum_payment * state;
	cout << "The amount due for state tax is $" << state << ".\n";

	sum_payment = sum_payment - social - federal - state - union_dues;
	if (dependents >= 3){
		sum_payment = sum_payment - dependent_withhold;
	}
	cout << "Your net weekly wages are $" << sum_payment << ".\n";


	return 0;
}
