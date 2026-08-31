//1. Ask the user to enter first and last name. Display a message “Hello [last name]”.
#include <iostream>
using namespace std;
int main()

{
	//Entering First and Last Name
	string FirstName, LastName;

	//Entering First Name
	cout << "Please Enter You First Name" << endl;
	cin >> FirstName;

	//Entering Last Name
	cout << "Please Enter You Last Name" << endl;
	cin >> LastName;

	//Outputting Last Name
	cout << "Hello " << LastName << endl;

	return 0;
}