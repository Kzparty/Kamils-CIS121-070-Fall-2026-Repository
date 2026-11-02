//2. Enter players last name, number of hits and at bats at the keyboard, use ctl + z to stop.Use a
//function to compute batting average.Pass the hits and at bats to the function.The function
//should return batting average(at bats / number of hits).Display last name and batting average.
//Give a count of the number of players entered and display the count after the loop.

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

float compute_batting_avg(float hits, float at_bats)
{
	float batting_avg;

	batting_avg = hits / at_bats;

	return batting_avg;
}
int main()
{
	string lname;
	float hits, at_bats, batting_avg;
	int c;

	//before loop
	c = 0;

	cout << "Enter player last name, ctl+z to stop: ";
	cin >> lname;

	while (!cin.eof())
	{
		cout << "Enter number of hits and at bats: ";
		cin >> hits >> at_bats;

		//calling statement
		batting_avg = compute_batting_avg(hits, at_bats);

		c = c + 1;

		cout << setprecision(3) << fixed;
		cout << "Player:           " << lname << endl;
		cout << "Batting Average:  " << setw(8) << batting_avg << endl;

		cout << "Enter player last name, ctl+z to stop: ";
		cin >> lname;
	} //end of loop

	//after the loop
	cout << endl;
	cout << "Number of players:  " << setw(8) << c << endl;

	system("pause");

	return 0;
}