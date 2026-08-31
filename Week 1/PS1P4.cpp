//4. Allows the user to enter three integers. Compute the result = (n1 + n2) * n3. Display the result.
#include <iostream>
using namespace std;
int main() 
{
	// Declare three integer variables
	int n1, n2, n3;

	//First Integer
	cout << "Please Enter Your First Integer: ";
	cin >> n1;

	//Second Integer
	cout << "Please Enter Your Second Integer: ";
	cin >> n2;

	//Third Integer
	cout << "Please Enter Your Third Integer: ";
	cin	 >> n3;

	//display the result
	int answer = (n1 + n2) * n3;
	cout << "The result is: " << answer << endl;

	return 0;
}