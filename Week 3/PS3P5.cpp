//5. You are setting up a business and need to compute the break even point. This indicates how many items you must sell at a given price to cover your overhead. Enter fixed costs, price per unit and cost per unit into your program.Compute the break even point by dividing fixed costs by the difference of price per unit and cost per unit
#include <iostream>
using namespace std;
int main()
{
	double fixedCosts, pricePerUnit, costPerUnit, breakEvenPoint;

	// Prompt user for input
	cout << "Enter fixed costs $ ";
	cin >> fixedCosts;
	cout << "Enter price per unit $ ";
	cin >> pricePerUnit;
	cout << "Enter cost per unit $ ";
	cin >> costPerUnit;

	// Calculate break even point
	if (pricePerUnit > costPerUnit)
	{
		breakEvenPoint = fixedCosts / (pricePerUnit - costPerUnit);
		cout << "Break-even point: " << breakEvenPoint << " units" << endl;
	}

	else
	{
		cout << "Error: Price per unit must be greater than cost per unit to compute break even point." << endl;
	}
	return 0;
}