//5. Ask the user to enter two real numbers. Compute and display the sum, product and difference of the numbers.
#include <iostream>
using namespace std;
int main()
{
	//Variables of two real numbers
	double n1, n2;

	// Ask to enter two real numbers
	cout << "Please enter the first real number: ";
	cin >> n1;
	cout << "Please enter the second real number: ";
	cin >> n2;

	// Compute sum, product, and difference
	double sum = n1 + n2;
	double product = n1 * n2;
	double difference = n1 - n2;

	// Display results
	cout << "Sum: " << sum << endl;
	cout << "Product: " << product << endl;
	cout << "Difference: " << difference << endl;

	return 0;
}