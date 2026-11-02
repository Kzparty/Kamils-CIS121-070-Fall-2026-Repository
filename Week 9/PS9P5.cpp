//5. Allow the user to enter student last name, credit hours and district code, use ctl + z to stop.Use a
//function to compute tuition owed.First, write a function to determine the cost per credit hour.
//Charge In district(code of I) $250 per credit hour.Out of district(code of O) is $550 per credit
//hour.Write another function to compute tuition cost.Display student name and tuition cost.
//Sum and display total of all tuition costs.

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

float det_cost_per_hour(string district_code)
{
	float cost_per_hour;

	if (district_code == "I")
		cost_per_hour = 250.00f;
	else
		cost_per_hour = 550.00f;

	return cost_per_hour;
}
float compute_tuition(float credit_hours, float cost_per_hour)
{
	float tuition;

	tuition = credit_hours * cost_per_hour;

	return tuition;
}
int main()
{
	string lname, district_code;
	float credit_hours, cost_per_hour, tuition;
	float total_tuition;

	// before loop
	total_tuition = 0.0f;

	cout << "Enter student last name, ctl+z to stop: ";
	cin >> lname;

	while (!cin.eof())
	{
		cout << "Enter credit hours: ";
		cin >> credit_hours;
		cout << "Enter district code (I or O): ";
		cin >> district_code;

		// calling statements
		cost_per_hour = det_cost_per_hour(district_code);
		tuition = compute_tuition(credit_hours, cost_per_hour);

		total_tuition = total_tuition + tuition;

		cout << setprecision(2) << fixed;
		cout << "Student:         " << lname << endl;
		cout << "Tuition Cost:   $" << setw(10) << tuition << endl;

		cout << "Enter student last name, ctl+z to stop: ";
		cin >> lname;
	} // end of loop

	// after the loop
	cout << endl;
	cout << "Total tuition:  $" << setw(10) << total_tuition << endl;

	system("pause");

	return 0;
}