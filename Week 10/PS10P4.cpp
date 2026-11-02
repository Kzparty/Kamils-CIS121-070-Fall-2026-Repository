//4. Enter a number of widgets, use ctl + z to stop.Pass the number to a function by value, use ctl + z
//to stop.Use a single function to determine the cost per widget using the cost table below.Then
//compute extended price(number of widgets x cost per widget) and 7 % sales tax.Finally
//compute total order to be extended price plus sales tax.Pass cost per widget, extended price,
//sales tax and total order by reference.For each line, display number of widgets, cost per widget,
//extended price, sales tax and total order.Sum all total orders and display when there is no more
//data to process.
//Cost Table
//Number of Widgets Cost Per Widget
//10000 and up 4.00
//5, 000 and up 5.00
//All other amounts 10.00

#include<iostream>
#include<iomanip>
using namespace std;

void compute_widgets(int num_widgets, float& cost_per_widget, float& ext_price, float& sales_tax, float& total_order)
{
	if (num_widgets >= 10000)
		cost_per_widget = 4.00f;
	else if (num_widgets >= 5000)
		cost_per_widget = 5.00f;
	else
		cost_per_widget = 10.00f;

	ext_price = num_widgets * cost_per_widget;

	sales_tax = ext_price * 0.07f;

	total_order = ext_price + sales_tax;
}
int main()
{
	int num_widgets;
	float cost_per_widget, ext_price, sales_tax, total_order;
	float sum_orders = 0.0f;

	cout << "Enter number of widgets, ctl+z to stop :";
	cin >> num_widgets;

	while (!cin.eof())
	{
		//calling statement
		compute_widgets(num_widgets, cost_per_widget, ext_price, sales_tax, total_order);

		sum_orders += total_order;

		cout << setprecision(2) << fixed;
		cout << "Number of Widgets:  " << setw(10) << num_widgets << endl;
		cout << "Cost Per Widget:   $" << setw(10) << cost_per_widget << endl;
		cout << "Extended Price:    $" << setw(10) << ext_price << endl;
		cout << "Sales Tax:         $" << setw(10) << sales_tax << endl;
		cout << "Total Order:       $" << setw(10) << total_order << endl;

		cout << "Enter number of widgets, ctl+z to stop :";
		cin >> num_widgets;
	}
	cout << endl;
	cout << "Total of all orders: $" << setw(10) << sum_orders << endl;

	return 0;
}