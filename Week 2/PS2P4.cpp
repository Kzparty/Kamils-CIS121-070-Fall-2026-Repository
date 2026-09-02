//4. Enter last name and credits taken. Tuition is $250 per credit hour. Add a $100 lab fee. Compute total tuition(credits taken x 250 + lab fee).Display last name and tuition.
#include <string>
#include <iostream>
using namespace std;
int main()
{
	//Consistant info;
	const int labfee = 100;
	const int costPerCredit = 250;

	//Inputs:
	string lastname;
	cout << "What is your last name? ";
	cin >> lastname;

	int credits;
	cout << "How many credits are you taking this semester? ";
	cin >> credits;

	//Calcs:
	int totalCost = (credits * costPerCredit) + labfee;

	//display:
	cout << "hello " << lastname << ", your total tuition this semester including lab fees is: $" << totalCost << endl;

	return 0;
}