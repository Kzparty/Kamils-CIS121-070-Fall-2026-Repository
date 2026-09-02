//5. The price of an item and discount percent is entered into the program. Display the discount amount and discounted price of the item.Note: enter the discount percent in decimal form.
#include <iostream>
using namespace std;
int main ()
{
	// Inputs:
	double price, discount;

	cout << "what is the price of the item: ";
	cin >> price;

	cout << "Enter the discount percent (in decimal form, 10% = .1): ";
	cin >> discount;

	// Calcs:
	double discountAmount, discountedPrice;

	discountAmount = price * discount;
	discountedPrice = price - discountAmount;

	// Display:
	cout << "You're saving $" << discountAmount << endl;
	cout << "Your new price after discountis $" << discountedPrice << endl;

	return 0;
 }