//4. Allow the employee to enter last name, job code and hours worked, use ctl + z to stop.Use a
//function to determine the pay rate.Pass to this function the job code and it should return rate
//of pay.Use the following rates based on Job code : L is $25 / hr, A is $30 / hr and J is $50 / hr for
//respective pay rates.Write another function to determine the gross pay.Pass to this function
//the hours worked and pay rate and return gross pay.Give time and a half for overtime.Display
//last name and gross pay.Sum and display total of all gross pay.

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

float det_rate(string job_code)
{
	float rate;

	if (job_code == "L")
		rate = 25.00f;
	else if (job_code == "A")
		rate = 30.00f;
	else
		rate = 50.00f;

	return rate;
}
float compute_gross(float rate, float hours)
{
	float pay;

	if (hours > 40)
		pay = (hours - 40) * rate * 1.5f + 40.00f * rate;
	else
		pay = hours * rate;

	return pay;
}
int main()
{
	string lname, job_code;
	float hours, rate, pay;
	float total_pay;

	// before loop
	total_pay = 0.0f;

	cout << "Enter employee last name, ctl+z to stop: ";
	cin >> lname;

	while (!cin.eof())
	{
		cout << "Enter job code (L, A or J): ";
		cin >> job_code;
		cout << "Enter the hours worked: ";
		cin >> hours;

		// calling statements
		rate = det_rate(job_code);
		pay = compute_gross(rate, hours);

		total_pay = total_pay + pay;

		cout << setprecision(2) << fixed;
		cout << "Employee:       " << lname << endl;
		cout << "Gross Pay:     $" << setw(8) << pay << endl;

		cout << "Enter employee last name, ctl+z to stop: ";
		cin >> lname;
	} // end of loop

	// after the loop
	cout << endl;
	cout << "Total gross pay: $" << setw(8) << total_pay << endl;

	system("pause");

	return 0;
}