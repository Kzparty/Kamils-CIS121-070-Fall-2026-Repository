//4) Allow the user to enter the annual salary. Determine the tax rate from the table below. Compute the tax amount owed.Display salary, tax rate and tax amount.
//Salary Tax Rate
//> 100, 000 40 %
//50, 000 - 100, 000 35 %
//Under 50, 000 25 %

#include <iostream>
using namespace std;
int main()
{
	double salary;
	double taxRate;
	double taxAmount;

	//Input
	cout << "Enter your annual salary: ";
	cin >> salary;

	//tax rate based on salary
	if (salary > 100000) {
		taxRate = 0.40; // 40%
	}
	else if (salary >= 50000) {
		taxRate = 0.35; // 35%
	}
	else {
		taxRate = 0.25; // 25%
	}

	//Calc
	taxAmount = salary * taxRate;

	//Results
	cout << "Salary: $" << salary << endl;
	cout << "Tax Rate: " << (taxRate * 100) << "%" << endl;
	cout << "Tax Amount Owed: $" << taxAmount << endl;
	return 0;
}