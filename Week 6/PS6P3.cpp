//3. Allow the user to enter number of concert tickets and location code(H, L).The price per ticket depends on the volume and location(see below).Display the number of tickets, price per ticket and the total cost. Volume is greater than 25 or location is H cost per ticket is $30.00 Volume is greater than 10 (10 to 24) or location is L cost per ticket is $40.00 All other quantities or locations are $50.00

#include <iostream>
using namespace std;
int main()
{
	int numTickets;
	char locationCode;
	double pricePerTicket;
	double totalCost;

	//Input
	cout << "Enter number of concert tickets: ";
	cin >> numTickets;
	cout << "Enter location code (H for high, L for low): ";
	cin >> locationCode;

	//Price per ticket based on volume and location
	if (numTickets > 25 || locationCode == 'H' || locationCode == 'h') {
		pricePerTicket = 30.00;
	}
	else if ((numTickets >= 10 && numTickets <= 24) || locationCode == 'L' || locationCode == 'l') {
		pricePerTicket = 40.00;
	}
	else {
		pricePerTicket = 50.00;
	}

	//Calc
	totalCost = numTickets * pricePerTicket;

	//Results
	cout << "Number of tickets: " << numTickets << endl;
	cout << "Price per ticket: $" << pricePerTicket << endl;
	cout << "Total cost: $" << totalCost << endl;
	return 0;
}