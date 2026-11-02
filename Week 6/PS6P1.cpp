//1. The input to the problem is quantity of widgets and customer status. You set the price
//based upon quantity and status using the table below.Your program should determine the
//price to charge based on the schedule below.Calculate the extended price.Calculate tax
//at 7 % .Display the extended price, tax amount and total.
//Quantity Status Price
//> 10000 A $10
//> 10000 B $12
//5000 to 10000 C $20
//5000 to 10000 D $22
//Below 5000 Any $30

#include<iostream>
using namespace std;
int main() 
{
	int quantity;
	char status;
	double price, extendedPrice, tax, total;

	//Input
	cout << "Enter quantity of widgets: ";
	cin >> quantity;
	cout << "Enter customer status (A, B, C, D): ";
	cin >> status;

	//quantity and status
	if (quantity > 10000) {
		if (status == 'A') {
			price = 10.0;
		}
		else if (status == 'B') {
			price = 12.0;
		}
		else {
			cout << "Invalid status for quantity > 10000." << endl;
			return 1; //Exit with error
		}
	}
	else if (quantity >= 5000 && quantity <= 10000) {
		if (status == 'C') {
			price = 20.0;
		}
		else if (status == 'D') {
			price = 22.0;
		}
		else {
			cout << "Invalid status for quantity between 5000 and 10000." << endl;
			return 1; //Exit with error
		}
	}
	else { // Below 5000
		price = 30.0;
	}
	//Calcs
	extendedPrice = quantity * price;
	tax = extendedPrice * 0.07; // 7% tax
	total = extendedPrice + tax;

	//Results
	cout << "Extended Price: $" << extendedPrice << endl;
	cout << "Tax Amount: $" << tax << endl;
	cout << "Total: $" << total << endl;
	return 0;
}