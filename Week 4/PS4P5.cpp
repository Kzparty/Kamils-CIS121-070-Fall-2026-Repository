//5. Enter the user’s last name, number of dependents and gross income. Compute adjusted gross income to be gross income minus dependents times $12000.Next determine an income tax rate.Adjusted gross incomes over $50, 000 have a tax rate of 20 % .Adjusted gross incomes $50, 000 or under have a tax rate of 10 %.

//Once you determine the tax rate, compute income tax to be adjusted gross income times tax rate.If the income tax is less than 0, set the income tax to $100.

//Display last name, gross income, number of dependents, adjusted gross income, and income tax.
#include <iostream>
using namespace std;
int main()
{
	string lastName;
	int numDependents;
	double grossIncome, adjustedGrossIncome, incomeTax, taxRate;

	//Input
	cout << "Enter your last name: ";
	cin >> lastName;
	cout << "Enter number of dependents: ";
	cin >> numDependents;
	cout << "Enter gross income: $";
	cin >> grossIncome;

	//Compute adjusted gross income
	adjustedGrossIncome = grossIncome - (numDependents * 12000);

	//Determine tax rate
	if (adjustedGrossIncome > 50000) 
	{
		taxRate = 0.20; // 20%
	}
	else 
	{
		taxRate = 0.10; // 10%
	}

	//Compute income tax
	incomeTax = adjustedGrossIncome * taxRate;
	
	//If income tax is less than 0, set it to $100
	if (incomeTax < 0) 
	{
		incomeTax = 100;
	}

	//Display
	cout << "Last Name: " << lastName << endl;
	cout << "Gross Income: $" << grossIncome << endl;
	cout << "Number of Dependents: " << numDependents << endl;
	cout << "Adjusted Gross Income: $" << adjustedGrossIncome << endl;
	cout << "Income Tax: $" << incomeTax << endl;

	return 0;
}