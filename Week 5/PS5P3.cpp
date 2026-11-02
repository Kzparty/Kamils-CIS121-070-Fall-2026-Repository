//3) Enter the employee last name, hours worked and job code. Compute the pay based on the hourly rate per the job code.Display employee last name, hours worked, pay rate and total. Job Code Pay Rate
//E 25.00
//J 20.00
//A 15.00

#include <iostream>
using namespace std;
int main()
{
	string lastName;
	double hoursWorked;
	char jobCode;
	double payRate;
	double totalPay;

	//Input
	cout << "Enter employee last name: ";
	cin >> lastName;
	cout << "Enter hours worked: ";
	cin >> hoursWorked;
	cout << "Enter job code (E, J, A): ";
	cin >> jobCode;

	//pay rate based on job code
	switch (jobCode) {
	case 'E':
	case 'e':
		payRate = 25.00;
		break;
	case 'J':
	case 'j':
		payRate = 20.00;
		break;
	case 'A':
	case 'a':
		payRate = 15.00;
		break;
	default:
		cout << "Invalid job code entered." << endl;
		return 1; // Exit program error code
	}

	//Calc
	totalPay = hoursWorked * payRate;

	//Display results
	cout << "Employee Last Name: " << lastName << endl;
	cout << "Hours Worked: " << hoursWorked << endl;
	cout << "Pay Rate: $" << payRate << endl;
	cout << "Total Pay: $" << totalPay << endl;

	return 0;
}