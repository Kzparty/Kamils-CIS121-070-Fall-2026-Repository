//3. Enter first name and number of steps walked in a day.For each step you burned .25 calories.Computer the number of calories burned.Display first name and calories burned.
#include <iostream>
using namespace std;
int main()
{
	string firstName;
	int steps;
	double caloriesBurned;

	//First name and number of steps
	cout << "Enter your first name: ";
	cin >> firstName;
	cout << "Enter the number of steps walked in a day: ";
	cin >> steps;

	//Calories burned per step
	caloriesBurned = steps * 0.25;

	//Display
	cout << firstName << ", you burned " << caloriesBurned << " calories today." << endl;
	return 0;
 }