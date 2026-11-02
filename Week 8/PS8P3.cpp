//3. Allow any number of students to enter their last name and the credits taken (use ctl+z to stop).
//Charge $250 per credit hour.Use a function to compute total tuition.Display student last name,
//credits taken and tuition owed.Sum tuition and give a count of the number of students who
//entered data.

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
float CompTuition(float credits)
{
	float tuition;

	tuition = credits * 250.0f;

	return tuition;
} //end of function
int main()  //function header
{
	//function body
	//Define variables
	string lname;
	float c, tuition;
	float totaltuition;
	int count;

	totaltuition = 0.0f;
	count = 0;
	cout << "Enter last name and credits taken, ctl+z to stop: ";
	cin >> lname >> c;

	while (!cin.eof())
	{
		tuition = CompTuition(c);

		cout << setprecision(2) << fixed;
		cout << "Student last name is " << lname << endl;
		cout << "Credits taken is     " << setw(8) << c << endl;
		cout << "Tuition owed is     $" << setw(8) << tuition << endl;

		totaltuition = totaltuition + tuition;
		count = count + 1;

		cout << "Enter last name and credits taken, ctl+z to stop: ";
		cin >> lname >> c;

	}
	//after the loop
	cout << endl;
	cout << "Sum of all tuition is           $" << setw(8) << totaltuition << endl;
	cout << "Number of students entered is    " << setw(8) << count << endl;

	return 0;
}