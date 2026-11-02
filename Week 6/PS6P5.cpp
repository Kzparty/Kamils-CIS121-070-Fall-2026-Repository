//5. You need to display the gross salary for an employee. They input a job code and Hours. First,
//determine the rate of pay based on job code and hours(see table below).Next, compute gross
//pay(hrs* rate).No overtime pay.
//Job Code Hours Rate of Pay
//L > 40 50.00
//L <= 40 40.00
//J > 60 100.00
//J <= 60 75.00
//A > 40 25.00
//A <= 40 20.00

#include <iostream>
using namespace std;
int main()

{
	char jobCode;
	double hours, rate, grossPay;

	//Input
	cout << "Enter job code (L, J, A): ";
	cin >> jobCode;
	cout << "Enter hours worked: ";
	cin >> hours;

	//Determine rate of pay based on job code and hours
	switch (jobCode) {
	case 'L':
	case 'l':
		if (hours > 40) {
			rate = 50.00;
		}
		else {
			rate = 40.00;
		}
		break;
	case 'J':
	case 'j':
		if (hours > 60) {
			rate = 100.00;
		}
		else {
			rate = 75.00;
		}
		break;
	case 'A':
	case 'a':
		if (hours > 40) {
			rate = 25.00;
		}
		else {
			rate = 20.00;
		}
		break;
	default:
		cout << "Invalid job code." << endl;
		return 1; //Exit the program with an error code
	}

	//Calcs
	grossPay = hours * rate;

	//Display
	cout << "Gross salary: $" << grossPay << endl;

	return 0;
}