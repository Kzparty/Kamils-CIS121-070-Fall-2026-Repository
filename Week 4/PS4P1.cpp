//1. Allow a user to enter a quantity of an item. If the quantity is greater than or equal to 1000, the unit price should be $3.00.For quantities under 1000 the unit price is $5.00.Compute extended price to be quantity x unit price.Compute tax to be 7 % of the extendd price.The total is computed as extended price plus the tax. Display the quantity, unit price, extended price, tax and total.
#include <iostream>
using namespace std;
int main()
{
	int quantity;
	double unitPrice, extendedPrice, tax, total;

	//Prompt user for quantity
	cout << "Enter the quantity of the item: ";
	cin >> quantity;

	//Unit price based on quantity (and according to video, this is how you write it (BELOW) but it can also be >=1000)
	if (quantity == 1000 || quantity > 1000) 
	{
		unitPrice = 3.00;
	}
	else {
		unitPrice = 5.00;
	}

	//Calculations
	extendedPrice = quantity * unitPrice;
	tax = extendedPrice * 0.07; //7% tax
	total = extendedPrice + tax;

	//Display
	cout << "Quantity: " << quantity << endl;
	cout << "Unit Price: $" << unitPrice << endl;
	cout << "Extended Price: $" << extendedPrice << endl;
	cout << "Tax: $" << tax << endl;
	cout << "Total: $" << total << endl;\

	return 0;
}