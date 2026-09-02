//1. Allow the user to enter the quantity and unit price (price per item). Compute extended price (quantity x price).Display the extended price.
#include <iostream>
using namespace std;
int main()
{

	double total, unitPrice, totalPrice;

	//total and unit price
	cout << "Please enter total amount of items: ";
	cin >> total;
	cout << "Please enter the price of a single item: $";
	cin >> unitPrice;

	//Compute extended price 
	totalPrice = total * unitPrice;

	//The extended price
	cout << "The total price is of all items: $" << totalPrice << endl;

	return 0;
}