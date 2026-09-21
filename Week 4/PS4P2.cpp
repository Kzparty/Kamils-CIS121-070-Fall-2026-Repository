//2. The program asks the user for an item and quantity. Determine the unit price of the item based on the chart below.Compute the extended price to be quantity x unit price.Display the item, unit price and extended price.
//item A, B
//Unit price: A = $10.00, B = $20.00
#include <iostream>
using namespace std;
int main()
{
	char item;
	int quantity;
	double unitPrice = 0.0;
	double extendedPrice = 0.0;

	//Item input
	cout << "Enter the item (A or B): ";
	cin >> item;

	//Price based on the item
	if (item == 'A' || item == 'a') 
	{
		unitPrice = 10.00;
	}
	else if (item == 'B' || item == 'b') 
	{
		unitPrice = 20.00;
	}
	else 
	{
		cout << "Invalid item entered." << endl;
		return 1; // Exit the program with an error code
	}

	//Quantity input
	cout << "Enter the quantity: ";
	cin >> quantity;

	//Compute extended price
	extendedPrice = quantity * unitPrice;

	// Display the item, unit price, and extended price
	cout << "Item: " << item << endl;
	cout << "Unit Price: $" << unitPrice << endl;
	cout << "Extended Price: $" << extendedPrice << endl;

	return 0;
 }