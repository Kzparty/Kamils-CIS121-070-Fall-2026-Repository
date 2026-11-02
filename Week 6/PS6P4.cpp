//4. Allow the user to enter equipment code of a rental and a code indicating half day or full day.
//Determine the cost of the rental. Display the rental cost
//Equipment Code Day Cost
//A F 10.00
//A H 15.00
//B F 20.00
//B H 35.00
//C H 40.00
//C F 45.00
//All others All others 50.00

#include <iostream>
using namespace std;
int main() {
	char equipmentCode;
	char rentalType;
	double cost;

	//Input
	cout << "Enter equipment code (A, B, C): ";
	cin >> equipmentCode;
	cout << "Enter rental type (F for full day, H for half day): ";
	cin >> rentalType;

	//Cost based on equipment code and rental type
	if (equipmentCode == 'A') {
		if (rentalType == 'F') {
			cost = 10.00;
		}
		else if (rentalType == 'H') {
			cost = 15.00;
		}
		else {
			cost = 50.00; //Invalid rental type
		}
	}
	else if (equipmentCode == 'B') {
		if (rentalType == 'F') {
			cost = 20.00;
		}
		else if (rentalType == 'H') {
			cost = 35.00;
		}
		else {
			cost = 50.00; //Invalid rental type
		}
	}
	else if (equipmentCode == 'C') {
		if (rentalType == 'F') {
			cost = 45.00;
		}
		else if (rentalType == 'H') {
			cost = 40.00;
		}
		else {
			cost = 50.00; //Invalid rental type
		}
	}
	else {
		cost = 50.00; //Invalid equipment code
	}

	// Display the rental cost
	cout << "The rental cost is: $" << cost << endl;
	return 0;
}