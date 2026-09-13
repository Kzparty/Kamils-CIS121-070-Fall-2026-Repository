//1. Allow the user to enter two exam scores from the keyboard. The first exam is worth 60 % of the total points and the second exam is worth 40 % .Calculate the total score by multiplying each exam score input by the respective weighting then add the two results together.Display the total.
#include <iostream>
using namespace std;
int main()
{
    double exam1, exam2, totalScore;

    //60% of grade
    cout << "Enter your score for the first exam: %";
    cin >> exam1;

    //40% of grade
    cout << "Enter your score for the second exam: %";
    cin >> exam2;

    //Calc total score
    totalScore = exam1 * 0.6 + exam2 * 0.4;
    cout << "Your total score is: " << totalScore << endl;

    return 0;
}