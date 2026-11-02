//4. Any number of customers will enter a product code (W, C, G) and a quantity (ctl+z to stop). Use
//a function to determine unit price.Write another function to compute shipping.Then compute
//the total.Display the product code, unit price, shipping, extended price(quantity x unit price)
//and total for the order for each entry.Sum and display the total of all entries made.
//Product Code Unit Price Shipping
//W $10.00 $2.00
//C $15.00 $5.00
//G $20.00 $7.00

#include<iostream>
#include<iomanip>
using namespace std;
float CompUnitPrice(char code)
{
	float price;

	if (code == 'W' || code == 'w')
		price = 10.00f;
	else if (code == 'C' || code == 'c')
		price = 15.00f;
	else if (code == 'G' || code == 'g')
		price = 20.00f;
	else
		price = 0.0f;

	return price;
} //end of function
float CompShipping(char code)
{
	float ship;

	if (code == 'W' || code == 'w')
		ship = 2.00f;
	else if (code == 'C' || code == 'c')
		ship = 5.00f;
	else if (code == 'G' || code == 'g')
		ship = 7.00f;
	else
		ship = 0.0f;

	return ship;
}
int main()  //function header
{
	//function body
	//Define variables
	char code;
	float q, price, ship, ext, total;
	float grandtotal;

	grandtotal = 0.0f;
	cout << "Enter product code (W, C, G) and quantity, ctl+z to stop";
	cin >> code >> q;

	while (!cin.eof())
	{
		price = CompUnitPrice(code);
		ship = CompShipping(code);
		ext = q * price;
		total = ext + ship;

		cout << setprecision(2) << fixed;
		cout << "Product code is         " << code << endl;
		cout << "Unit price is          $" << setw(8) << price << endl;
		cout << "Shipping is            $" << setw(8) << ship << endl;
		cout << "Extended price is      $" << setw(8) << ext << endl;
		cout << "Total for the order is $" << setw(8) << total << endl;

		grandtotal = grandtotal + total;

		cout << "Enter product code (W, C, G) and quantity, ctl+z to stop";
		cin >> code >> q;

	}
	//after the loop
	cout << endl;
	cout << "Total of all entries is $" << setw(8) << grandtotal << endl;

	return 0;
}