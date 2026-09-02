//3. The user is to enter the length and width of a rectangle. Computer the area (length x width) and the circumference(2 x length + 2 x width).Display the area ad circumference.
//																											^perimeter*											  ^and perimeter*
#include <iostream>
using namespace std;
int main()
{
	//inputs:
	double length, width;

	cout << "What is the length of the rectangle? ";
	cin >> length;
	
	cout << "what is the width of the rectangle? ";
	cin >> width;

	// Calcs:
	double area = length * width;
	double perimeter = (2 * length) + (2 * width);

	// Display answers:
	cout << "The area of your rectangle is: " << area << endl;
	cout << "The perimeter of your rectangle is " << perimeter << endl;

	return 0;
}