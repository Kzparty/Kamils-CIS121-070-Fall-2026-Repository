//5. Enter the amount of investment, the 5 year interest rate and 10 year interest rate, use ctl + z to
//stop.Pass the amount and interest rates to a function by value.Pass variables representing five
//year amount and ten year amount to the same function by reference.Compute the five year
//amount and ten year amount using the formula below.Display the amount of the investment,
//the five year amount and the ten year amount.
//Five year amount = amount of the investment x(1 + 5 year rate) raised to 5th power.
//Ten year amount = amount of the investment x(1 + 10 year rate) raised to 10th power.
//Note: Enter the 5 year rate and 10 year rate in decimal form, i, e 5 % is entered as 0.05.
//Also Note : you need to use the pow built in function.Recall the pow function syntax :
//pow(base, exponent)
//In this case, base is 1 + 5 year rate and exponent is 5.
//Another line will be : base is 1 + 10 year rate and exponent is 10.
//Use #include<math.h> for the pow function.

#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

void compute_investment(float amount, float rate_5, float rate_10, float& five_yr_amt, float& ten_yr_amt)
{
	five_yr_amt = amount * pow(1 + rate_5, 5);

	ten_yr_amt = amount * pow(1 + rate_10, 10);
}
int main()
{
	float amount, rate_5, rate_10, five_yr_amt, ten_yr_amt;

	cout << "Enter amount of investment, ctl+z to stop :$";
	cin >> amount;

	while (!cin.eof())
	{
		cout << "Enter 5 year rate (decimal form, 5% is 0.05) :";
		cin >> rate_5;
		cout << "Enter 10 year rate (decimal form, 5% is 0.05) :";
		cin >> rate_10;

		//calling statement
		compute_investment(amount, rate_5, rate_10, five_yr_amt, ten_yr_amt);

		cout << setprecision(2) << fixed;
		cout << "Investment Amount:  $" << setw(12) << amount << endl;
		cout << "Five Year Amount:   $" << setw(12) << five_yr_amt << endl;
		cout << "Ten Year Amount:    $" << setw(12) << ten_yr_amt << endl;

		cout << "Enter amount of investment, ctl+z to stop :$";
		cin >> amount;
	}

	return 0;
}