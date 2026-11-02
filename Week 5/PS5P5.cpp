//5) You are running a metal recycling center and must pay people for metals they bring in. You give them a rate based on the weight in the table below.Allow the user to enter the weight. Determine the rate and then display the weight, rate and total given to the customer. Weight Rate Per Pound
//> 100 .50
//30 - 100 .25
//20 - less 30 .20
//Less 20 .10

#include <iostream>
using namespace std;
int main()
{
	double weight, rate, total;

	//Input
	cout << "Enter the weight of the metal (in pounds): ";
	cin >> weight;

	//Rate based on weight
	if (weight > 100) {
		rate = 0.50;
	}
	else if (weight >= 30) {
		rate = 0.25;
	}
	else if (weight >= 20) {
		rate = 0.20;
	}
	else {
		rate = 0.10;
	}

	//Calcu
	total = weight * rate;

	//Display
	cout << "Weight: " << weight << " pounds" << endl;
	cout << "Rate: $" << rate << " per pound" << endl;
	cout << "Total payment: $" << total << endl;

	return 0;
}