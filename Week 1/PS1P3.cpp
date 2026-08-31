//3. Ask the user to enter last name and score.Format a message that says “[last name] has a score of[score]”.
#include <iostream>
using namespace std;
int main() 
{
	//Enter Last Name
	string lastName;
	cout << "PleaseEnter Your Last Name:";
	cin >> lastName;

	//Enter Your Score
	float score;
	cout << "Please Enter Your Score:";
	cin >> score;	

	//Output the message
	cout << lastName << " has a score of " << score << endl;
}