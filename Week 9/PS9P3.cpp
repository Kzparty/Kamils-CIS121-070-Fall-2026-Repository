//3. Enter the destination city, miles travelled and gallons used for a trip, use ctl + z to stop.Use a
//function to compute miles per gallon.Pass miles travelled and gallons used to the function.The
//function should return miles per gallon.Use another function to compute gas cost.Pass to this
//function gallons used.Each gallon costs $3.50.Compute and return the cost.Display destination
//city, miles per gallon and cost of gas.Sum and display the total cost of gas

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

float compute_mpg(float miles_trav, float gallons)
{
	float mpg;

	mpg = miles_trav / gallons;

	return mpg;
}
float compute_gas_cost(float gallons)
{
	const float cost_per_gallon = 3.50f;
	float gas_cost;

	gas_cost = gallons * cost_per_gallon;

	return gas_cost;
}
int main()
{
	string city;
	float miles_trav, gallons, mpg, gas_cost;
	float total_gas_cost;

	// before loop
	total_gas_cost = 0.0f;

	cout << "Enter destination city, ctl+z to stop: ";
	cin >> city;

	while (!cin.eof())
	{
		cout << "Enter miles travelled and gallons used: ";
		cin >> miles_trav >> gallons;

		// calling statements
		mpg = compute_mpg(miles_trav, gallons);
		gas_cost = compute_gas_cost(gallons);

		total_gas_cost = total_gas_cost + gas_cost;

		cout << setprecision(2) << fixed;
		cout << "Destination:       " << city << endl;
		cout << "Miles per gallon:  " << setw(8) << mpg << endl;
		cout << "Cost of gas:      $" << setw(8) << gas_cost << endl;

		cout << "Enter destination city, ctl+z to stop: ";
		cin >> city;
	} // end of loop

	// after the loop
	cout << endl;
	cout << "Total cost of gas: $" << setw(8) << total_gas_cost << endl;

	system("pause");

	return 0;
}