//2. Allow the user to enter last name, hours and pay rate.Compute gross pay to be hours x rate. (Note: we are not giving time and a half for over time hours yet!).Display last name and gross pay.
#include <iostream>
using namespace std;
int main()
{
	//Last name input
	string lastname;
	cout << "What is your last name: ";
	cin >> lastname;

	//Hours and pay rate input
	double hours, payRate;
	cout << "How much money do you make per hour? $";
	cin >> payRate;

	cout << "How many hours do you work a week? ";
	cin >> hours;

	//Total weekly pay calc
	double grossPay = hours * payRate;

	//Display messaage with gross pay
	cout << "hello " << lastname << ", your weekly pay is $" << grossPay << endl;
	
	return 0;
}