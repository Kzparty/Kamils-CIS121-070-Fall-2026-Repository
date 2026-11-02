//2. Enter a part number of the following (10, 99, 55, 70, 50). Also enter the quantity.
//Determine the cost per unit using the table below.Then calculate the total cost.Display
//the part number, cost per unit and total.
//Part Quantity Cost Per Unit
//10 > 1000 1.00
//99 > 500 2.00
//All others All others 5.00

#include <iostream>
using namespace std;
int main() 
{
	int partNumber, quantity;
	double costPerUnit, totalCost;

	//Input
	cout << "Enter a part number (10, 99, 55, 70, 50): ";
	cin >> partNumber;
	cout << "Enter the quantity: ";
	cin >> quantity;

	//Unit based on part number and quantity
	if (partNumber == 10 && quantity > 1000) {
		costPerUnit = 1.00;
	}
	else if (partNumber == 99 && quantity > 500) {
		costPerUnit = 2.00;
	}
	else {
		costPerUnit = 5.00;
	}

	//Calcs
	totalCost = costPerUnit * quantity;

	//Results
	cout << "Part Number: " << partNumber << endl;
	cout << "Cost Per Unit: $" << costPerUnit << endl;
	cout << "Total Cost: $" << totalCost << endl;
	return 0;
}