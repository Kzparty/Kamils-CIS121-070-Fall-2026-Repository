//5. Allow students to enter the department and course code as noted below for any number of
//courses(ctl + z to stop).Use a function to determine the lab fee also in the table below.For each
//entry display the department, course code and lab fee.Give the total of all lab fees to collect.
//Compute and display the average lab fee.
//Department Course Code Lab Fee
//CIS 101 $50.00
//CIS 121 $100.00
//MAT 111 $25.00
//MAT 112 $35.00
//ENG 100 $55.00
//All Others $50.00

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
float CompLabFee(string dept, int course)
{
	float fee;

	if (dept == "CIS" && course == 101)
		fee = 50.00f;
	else if (dept == "CIS" && course == 121)
		fee = 100.00f;
	else if (dept == "MAT" && course == 111)
		fee = 25.00f;
	else if (dept == "MAT" && course == 112)
		fee = 35.00f;
	else if (dept == "ENG" && course == 100)
		fee = 55.00f;
	else
		fee = 50.00f;  // all others

	return fee;
} //end of function
int main()  //function header
{
	//function body
	//Define variables
	string dept;
	int course, count;
	float fee, totalfee, avgfee;

	totalfee = 0.0f;
	count = 0;
	cout << "Enter department and course code, ctl+z to stop: ";
	cin >> dept >> course;

	while (!cin.eof())
	{
		fee = CompLabFee(dept, course);

		cout << setprecision(2) << fixed;
		cout << "Department is  " << dept << endl;
		cout << "Course code is " << course << endl;
		cout << "Lab fee is    $" << setw(8) << fee << endl;

		totalfee = totalfee + fee;
		count = count + 1;

		cout << "Enter department and course code, ctl+z to stop: ";
		cin >> dept >> course;

	}
	//after the loop
	if (count > 0)
		avgfee = totalfee / count;
	else
		avgfee = 0.0f;

	cout << endl;
	cout << "Total of all lab fees to collect is $" << setw(8) << totalfee << endl;
	cout << "Average lab fee is                  $" << setw(8) << avgfee << endl;

	return 0;
}