//3. Enter the student’s last name, credit hours and financial aid, use ctl + z to stop.Pass credit hours
//and financial aid to a function by value.Pass tuition and tuition owed by reference.Compute
//tuition to be credit hours times $250.Compute tuition owed to be tuition minus the financial
//aid.Display student’s last name, tuition and tuition owed.Sum and display total tuition owed by
//all students, count of number of entries and average amount owed by students.\

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

void compute_tuition(float credit_hours, float fin_aid, float& tuition, float& tuition_owed)
{
	tuition = credit_hours * 250.00f;

	tuition_owed = tuition - fin_aid;
}
int main()
{
	string lname;
	float credit_hours, fin_aid, tuition, tuition_owed;
	float total_owed = 0.0f, avg_owed;
	int count = 0;

	cout << "Enter student last name, ctl+z to stop :";
	cin >> lname;

	while (!cin.eof())
	{
		cout << "Enter credit hours :";
		cin >> credit_hours;
		cout << "Enter financial aid :$";
		cin >> fin_aid;

		//calling statement
		compute_tuition(credit_hours, fin_aid, tuition, tuition_owed);

		total_owed += tuition_owed;
		count += 1;

		cout << setprecision(2) << fixed;
		cout << "Student:        " << lname << endl;
		cout << "Tuition:       $" << setw(10) << tuition << endl;
		cout << "Tuition Owed:  $" << setw(10) << tuition_owed << endl;

		cout << "Enter student last name, ctl+z to stop :";
		cin >> lname;
	}

	//after the loop
	avg_owed = total_owed / count;

	cout << endl;
	cout << "Total tuition owed:       $" << setw(10) << total_owed << endl;
	cout << "Number of entries:         " << setw(10) << count << endl;
	cout << "Average amount owed:      $" << setw(10) << avg_owed << endl;

	return 0;
}