//2. Enter the weight of a package and zip code.Use ctl + z to stop.Use a single function to do the
//computations specified next.Pass these weight and zip code by value, and pass postage, area
//charge and weight charge by reference.Compute postage to be sum of weight charge and area
//charge.Use tables below to find the charges.Compute weight charge to be weight x weight
//charge per ounce.Find the area charge in the table based on zip code.Then compute postage to
//be area charge plus weight charge.The function should return the weight charge, area charge
//and postage.Display area charge, weight charge and postage.Count and display the number of
//entries made.
//Area Table – Used to determine the area charge
//Area Area Charge
//60171 $2.00
//60172 $2.50
//60635 $3.00
//All others $5.00
//Weight Table – used to determine the weight charge
//Weight Weight Charge per Ounce
//> 100 0.02
//> 50 0.03
//All other 0.05

#include<iostream>
#include<iomanip>
using namespace std;

void compute_postage(float weight, int zip, float& postage, float& area_charge, float& weight_charge)
{
	float rate_per_oz;

	if (zip == 60171)
		area_charge = 2.00f;
	else if (zip == 60172)
		area_charge = 2.50f;
	else if (zip == 60635)
		area_charge = 3.00f;
	else
		area_charge = 5.00f;

	if (weight > 100)
		rate_per_oz = 0.02f;
	else if (weight > 50)
		rate_per_oz = 0.03f;
	else
		rate_per_oz = 0.05f;

	weight_charge = weight * rate_per_oz;

	postage = area_charge + weight_charge;
}
int main()
{
	float weight, postage, area_charge, weight_charge;
	int zip, count = 0;

	cout << "Enter package weight, ctl+z to stop :";
	cin >> weight;

	while (!cin.eof())
	{
		cout << "Enter zip code :";
		cin >> zip;

		//calling statement
		compute_postage(weight, zip, postage, area_charge, weight_charge);

		count += 1;

		cout << setprecision(2) << fixed;
		cout << "Area Charge:    $" << setw(8) << area_charge << endl;
		cout << "Weight Charge:  $" << setw(8) << weight_charge << endl;
		cout << "Postage:        $" << setw(8) << postage << endl;

		cout << "Enter package weight, ctl+z to stop :";
		cin >> weight;
	}
	cout << endl;
	cout << "Number of entries : " << count << endl;

	return 0;
}