//2) You are buying apples in bulk. Enter the quantity in pounds, determine the price per pound, then display the price per pound and total.
//LBS Price Per Pound
//> 100 .10
//50 - 100 .25
//Under 50 .50

#include <iostream>
using namespace std;
int main()
{
	double pounds, pricePerPound, totalPrice;
	cout << "Enter the quantity of apples in pounds: ";
	cin >> pounds;
	if (pounds > 100) {
		pricePerPound = 0.10;
	}
	else if (pounds >= 50) {
		pricePerPound = 0.25;
	}
	else {
		pricePerPound = 0.50;
	}

	//Calcs
	totalPrice = pounds * pricePerPound;
	cout << "Price per pound: $" << pricePerPound << endl;
	cout << "Total price: $" << totalPrice << endl;

	return 0;
}