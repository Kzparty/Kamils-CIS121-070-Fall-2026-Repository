//1. Allow the user to enter a quantity and price, use ctl + z to stop.Use one function to compute the
//total(quantity times price), tax(7 % of total) and total order(total plus tax).The function should
//be passed the quantity and price by value and total, tax and total order by reference.Display
//total, tax and total order in main.Sum and display total of all orders and tax for all orders and
//display after the loop(all data is processed)

#include<iostream>
#include<iomanip>
using namespace std;

void compute_order(int quantity, float price, float& total, float& tax, float& total_order)
{
	total = quantity * price;

	tax = total * 0.07f;

	total_order = total + tax;
}
int main()
{
	int quantity;
	float price, total, tax, total_order;
	float sum_orders = 0.0f, sum_tax = 0.0f;

	cout << "Enter quantity, ctl+z to stop :";
	cin >> quantity;

	while (!cin.eof())
	{
		cout << "Enter price :$";
		cin >> price;

		//calling statement
		compute_order(quantity, price, total, tax, total_order);

		sum_orders += total_order;
		sum_tax += tax;

		cout << setprecision(2) << fixed;
		cout << "Total:        $" << setw(10) << total << endl;
		cout << "Tax:          $" << setw(10) << tax << endl;
		cout << "Total Order:  $" << setw(10) << total_order << endl;

		cout << "Enter quantity, ctl+z to stop :";
		cin >> quantity;
	}
	cout << endl;
	cout << "Total of all orders: $" << setw(10) << sum_orders << endl;
	cout << "Total of all tax:    $" << setw(10) << sum_tax << endl;

	return 0;
}