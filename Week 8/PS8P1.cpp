//1. Enter destination city, miles travelled to get there and gallons of gasoline used for any number
//of trips entered at the keyboard(use ctl + z to stop).Use a function to compute miles per gallon.
//Display the destination city and miles per gallon for each trip entered.Sum the miles travelled
//and give a count of the number of trips made.Display these at the end of the program

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
float CompMPG(float miles, float gallons)
{
	float mpg;

	mpg = miles / gallons;

	return mpg;
} //end of function
int main()  //function header
{
	//function body
	//Define variables
	string city;
	float m, g, mpg;
	float totalmiles;
	int trips;

	totalmiles = 0.0f;
	trips = 0;
	cout << "Enter destination city, miles, and gallons, ctl+z to stop: ";
	cin >> city >> m >> g;

	while (!cin.eof())
	{
		mpg = CompMPG(m, g);

		cout << setprecision(2) << fixed;
		cout << "Destination city is " << city << endl;
		cout << "Miles per gallon is " << setw(8) << mpg << endl;

		totalmiles = totalmiles + m;
		trips = trips + 1;

		cout << "Enter destination city, miles, and gallons, ctl+z to stop: ";
		cin >> city >> m >> g;

	}
	//after loop
	cout << endl;
	cout << "Sum of all miles travelled is " << setw(8) << totalmiles << endl;
	cout << "Number of trips made is       " << setw(8) << trips << endl;

	return 0;
}