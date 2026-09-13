//3.	Enter the total for a meal. Compute a tip at 15%. Display total, tip and total with tip.
#include <iostream>
using namespace std;
int main()
{
	double mealTotal, tip, totalWithTip;

	// Prompt user for the total of the meal
	cout << "Please enter the total for the meal: ";
	cin >>mealTotal;

	// Calculate tip at 15%
	tip = mealTotal * 0.15;

	// Calculate total with tip
	totalWithTip = mealTotal + tip;

	// Display results
	cout << "Meal Total: $" << mealTotal << endl;
	cout << "Tip (15%): $" << tip << endl;
	cout << "Total with Tip: $" << totalWithTip << endl;

	return 0;
}