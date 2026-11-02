//1. Allow any number of users to enter a quantity and price at the keyboard(use ctl + z to stop).
//Compute the extended price(quantity times price).If quantity is over 1000 give a 10 % discount.
//Display quantity, price and extended, discount amount and discounted price for each entry.
//Keep a sum of the total for all the discounted prices.Display the total of discounted prices after
//all entries have been entered

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int quantity;
    double price, extended, discount, discounted;
    double totalDiscounted = 0.0;

    cout << "Enter quantity and price (Ctrl+Z to stop): ";

    //Loop ends when input fails, which happens on Ctrl+Z (EOF)
    while (cin >> quantity >> price)
    {
        extended = quantity * price;

        if (quantity > 1000)
            discount = extended * 0.10;
        else
            discount = 0.0;

        discounted = extended - discount;
        totalDiscounted += discounted;

        cout << fixed << setprecision(2);
        cout << "Quantity:            " << quantity << endl;
        cout << "Price:               $" << price << endl;
        cout << "Extended price:      $" << extended << endl;
        cout << "Discount amount:     $" << discount << endl;
        cout << "Discounted price:    $" << discounted << endl << endl;

        cout << "Enter quantity and price (Ctrl+Z to stop): ";
    }

    cout << endl << "Total of discounted prices: $" << totalDiscounted << endl;

    return 0;
}