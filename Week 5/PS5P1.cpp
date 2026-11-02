//1) The student will enter their last name and score. Determine their letter grade using the scale below.Display the student last name and letter grade. Score Letter Grade
//90 & up A
//80 to 89 B
//70 to 79 C
//60 to 69 D
//Below 60 F

#include <iostream>
using namespace std;
int main()
{
	string lastName;
	int score;

	//Inputlast name and score
	cout << "Enter your last name: ";
	cin >> lastName;
	cout << "Enter your score: ";
	cin >> score;

	//Determine grade
	char Grade;
	if (score >= 90)
	{
		Grade = 'A';
	}
	else if (score >= 80)
	{
		Grade = 'B';
	}
	else if (score >= 70)
	{
		Grade = 'C';
	}
	else if (score >= 60)
	{
		Grade = 'D';
	}
	else {
		Grade = 'F';
	}

	//Display
	cout << "Student Last Name: " << lastName << endl;
	cout << "Your Grade is: " << Grade << endl;

	return 0;
}