//2. Allow the user to enter two real numbers. Compute and display the sum or the two numbers.
#include <iostream>
using namespace std;
int main()

{
	//entering two real numbers
	float n1, n2;

	//Sum
	float s;

	//entering number 1
	cout << "Please Enter a Number" << endl;
	cin >> n1;

	//entering number 2
	cout << "Please Enter a Number" << endl;
	cin >> n2;

	//computing and displaying sum of bother numbers
	s = n1 + n2;
	cout << "The sum of " << n1 << " and " << n2 << " is " << s << endl;

	return 0;
}