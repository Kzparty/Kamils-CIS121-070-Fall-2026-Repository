//3. Enter the number of books to order and cost per book. If the order total is over $50.00 shipping is free.If the order total is $50.00 or under charge $25 shipping. Display the order total and shipping charge(note 0 should display for a free shipping charge)
#include <iostream>
using namespace std;
int main()
{
	double costPerBook, orderTotal, shippingCharge;
	int numBooks;

	//Prompt user for input
	cout << "Enter the number of books to order: ";
	cin >> numBooks;
	cout << "Enter the cost per book: ";
	cin >> costPerBook;

	//Calculate order total
	orderTotal = numBooks * costPerBook;

	//Determine shipping charge
	if (orderTotal > 50.00)
	{
		shippingCharge = 0.00; //Free shipping
	}
	else
	{
		shippingCharge = 25.00; //Shipping charge for orders $50.00 or under
	}
	//Display
	cout << "Order Total: $" << orderTotal << endl;
	cout << "Shipping Charge: $" << shippingCharge << endl;
	
	return 0;
}