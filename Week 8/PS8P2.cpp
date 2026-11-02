//2. Allow the employee to enter last name, job code and hours worked(use ctl + z to stop).Use a
//function to calculate pay. (Job code L is $25 / hr, A is $30 / hr and J is $50 / hr).Give time and a half
//for overtime.Display last name and pay for each employee.Sum the pay for each employee as
//well as count the entries made.After all entries are made, compute and display the average pay
//and the number of entries made.

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
float CompPay(char code, float hrs)
{
	float rate, pay;

	if (code == 'L' || code == 'l')
		rate = 25.0f;
	else if (code == 'A' || code == 'a')
		rate = 30.0f;
	else if (code == 'J' || code == 'j')
		rate = 50.0f;
	else
		rate = 0.0f;

	if (hrs > 40.0f)
		pay = (40.0f * rate) + ((hrs - 40.0f) * rate * 1.5f);  //time and a half
	else
		pay = hrs * rate;

	return pay;
} //end of function
int main()  //function header
{
	//function body
	//Define variables
	string lname;
	char code;
	float h, pay;
	float totalpay, avgpay;
	int count;

	totalpay = 0.0f;
	count = 0;
	cout << "Enter last name, job code (L, A, J) and hours worked, ctl+z to stop: ";
	cin >> lname >> code >> h;

	while (!cin.eof())
	{
		pay = CompPay(code, h);

		cout << setprecision(2) << fixed;
		cout << "Employee last name is " << lname << endl;
		cout << "Employee's pay is    $" << setw(8) << pay << endl;

		totalpay = totalpay + pay;
		count = count + 1;

		cout << "Enter last name, job code (L, A, J) and hours worked, ctl+z to stop: ";
		cin >> lname >> code >> h;

	}
	//after the loop
	if (count > 0)
		avgpay = totalpay / count;
	else
		avgpay = 0.0f;

	cout << endl;
	cout << "Sum of all pay is        $" << setw(8) << totalpay << endl;
	cout << "Average pay is           $" << setw(8) << avgpay << endl;
	cout << "Number of entries made is " << setw(8) << count << endl;

	return 0;
}