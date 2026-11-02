//5. Allow the user to enter student last name, credit hours and district code for any number of
//students(use ctl + z to stop).Compute tuition owed.In district(code of I) is charged $250 per
//credit hour.Out of district(code of O) is $550 per credit hour.Display student name and tuition
//owed for each entry.Sum the amount of tuition owed for all students as well and the total
//credit hours taken and finally the number of students who entered data.Display total tuition,
//total credit hours taken and count of number of students at the end.

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string lastName;
    int creditHours;
    char districtCode;
    double rate, tuition;
    double totalTuition = 0.0;
    int totalCreditHours = 0;
    int studentCount = 0;

    cout << "Enter last name, credit hours, and district code (I or O) (Ctrl+Z to stop): ";

    //Loop ends when input fails, which happens on Ctrl+Z (EOF)
    while (cin >> lastName >> creditHours >> districtCode)
    {
        districtCode = toupper(districtCode);

        if (districtCode == 'I')
            rate = 250.0;
        else if (districtCode == 'O')
            rate = 550.0;
        else
            rate = 0.0;   //invalid district code

        if (rate == 0.0)
        {
            cout << "Invalid district code. Entry skipped." << endl << endl;
        }
        else
        {
            tuition = creditHours * rate;

            totalTuition += tuition;
            totalCreditHours += creditHours;
            studentCount++;

            cout << fixed << setprecision(2);
            cout << "Student:        " << lastName << endl;
            cout << "Tuition owed:   $" << tuition << endl << endl;
        }

        cout << "Enter last name, credit hours, and district code (I or O) (Ctrl+Z to stop): ";
    }

    cout << fixed << setprecision(2);
    cout << endl << "Total tuition:        $" << totalTuition << endl;
    cout << "Total credit hours:   " << totalCreditHours << endl;
    cout << "Number of students:   " << studentCount << endl;

    return 0;
}