//4. The warrantee of an appliance depends on the cost of the appliance. For appliances over $1,000 the warrantee cost is 10 % of the price.For appliances $1,000 or less the warrantee cost is 5 % of the price.The user will enter the name and cost of an appliance.Display name and cost of appliance, the cost of the warrantee and the total(cost of the appliance + warranty).
#include <iostream>
using namespace std;
int main()
{
	string applianceName;
	double applianceCost, warrantyCost, totalCost;

	//User input
	cout << "Enter the name of the appliance: ";
	cin >> applianceName;
	cout << "Enter the cost of the appliance: ";
	cin >> applianceCost;

	//Calc warranty cost
	if (applianceCost > 1000) {
		warrantyCost = 0.10 * applianceCost; // 10% for appliances over $1,000
	}
	else 
	{
		warrantyCost = 0.05 * applianceCost; // 5% for appliances $1,000 or less
	}
	//Calc total cost
	totalCost = applianceCost + warrantyCost;

	//Display
	cout << "Appliance Name: " << applianceName << endl;
	cout << "Appliance Cost: $" << applianceCost << endl;
	cout << "Warranty Cost: $" << warrantyCost << endl;
	cout << "Total Cost (Appliance + Warranty): $" << totalCost << endl;

	return 0;
 }