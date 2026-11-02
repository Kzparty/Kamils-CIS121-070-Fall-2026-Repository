//1. Allow the user to enter a quantity and price, use ctl + z to stop.Use a function to compute the
//total(quantity times price).The function should be passed the quantity and price and then
//return the total.Use another function to compute 10 % discount if the total is over $10, 0000.00
//and 5 % for any amount equal to or lower than $10, 000.00.The second function should receive
//the total, check which discount rate to charge, compute discount amount and then compute the
//discount total(total – discount amount).It should return the discount total.Display total and
//discount total.Sum total and discount total and display at the end.

#include<iostream>
#include<iomanip>
using namespace std;

float compute_total(int quantity, float price)
{
	float total;

	total = quantity * price;

	return total;
}
float compute_discount_total(float total)
{
	float disc_rate, disc_amt, disc_total;

	if (total > 10000.00f)
		disc_rate = 0.10f;
	else
		disc_rate = 0.05f;

	disc_amt = total * disc_rate;
	disc_total = total - disc_amt;

	return disc_total;
}
int main()
{
	int quantity;
	float price, total, disc_total;
	float sum_total, sum_disc_total;

	//before loop
	sum_total = 0.0f;
	sum_disc_total = 0.0f;

	cout << "Enter quantity, ctl+z to stop: ";
	cin >> quantity;

	while (!cin.eof())
	{
		cout << "Enter price: $";
		cin >> price;

		//calling statements
		total = compute_total(quantity, price);
		disc_total = compute_discount_total(total);

		sum_total = sum_total + total;
		sum_disc_total = sum_disc_total + disc_total;

		cout << setprecision(2) << fixed;
		cout << "Total:             $" << setw(12) << total << endl;
		cout << "Discount Total:    $" << setw(12) << disc_total << endl;

		cout << "Enter quantity, ctl+z to stop: ";
		cin >> quantity;
	} //end of loop

	//after the loop
	cout << endl;
	cout << "Sum of Totals:           $" << setw(12) << sum_total << endl;
	cout << "Sum of Discount Totals:  $" << setw(12) << sum_disc_total << endl;

	system("pause");

	return 0;
}