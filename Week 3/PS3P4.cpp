//4. The purchase price and current price of a stock is entered into your program. Display the percentage increase of decrease of the stock.
//																												   ^or
#include <iostream>
using namespace std;
int main()
{
	double purchasePrice, currentPrice, percentageChange;

	// Input purchase price and current price
	cout << "Enter the purchase price of the stock $ ";
	cin >> purchasePrice;
	cout << "Enter the current price of the stock $ ";
	cin >> currentPrice;

	//calculate percentage change
	percentageChange = ((currentPrice - purchasePrice) / purchasePrice) * 100;
	cout << "The percentage change of the stock is: " << percentageChange << "%" << endl;

	//Messing around with the if statements
	if (percentageChange > 0)
	{
		cout << "The stock has increased in value." << endl;
	}
	else if (percentageChange < 0)
	{
		cout << "The stock has decreased in value." << endl;
	}
	else
	{
		cout << "The stock price has not changed." << endl;
	}

	return 0;
}