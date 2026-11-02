//4. Allow the employee to enter last name, job code and hours worked(use ctl + z to stop).Calculate
//pay. (Job code L is $25 / hr, A is $30 / hr and J is $50 / hr).Give time and a half for overtime.Display
//last name, job code, hours worked and pay for each employee.Sum the pay for each employee
//as well as count the entries made.After all entries are made, compute and display the average
//pay and the number of entries made.

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string lastName;
    char jobCode;
    double hours, rate, pay;
    double totalPay = 0.0, averagePay;
    int entryCount = 0;

    cout << "Enter last name, job code (L, A, J), and hours (Ctrl+Z to stop): ";

    //Loop ends when input fails, which happens on Ctrl+Z (EOF)
    while (cin >> lastName >> jobCode >> hours)
    {
        jobCode = toupper(jobCode);

        if (jobCode == 'L')
            rate = 25.0;
        else if (jobCode == 'A')
            rate = 30.0;
        else if (jobCode == 'J')
            rate = 50.0;
        else
            rate = 0.0;   //invalid job code

        if (rate == 0.0)
        {
            cout << "Invalid job code. Entry skipped." << endl << endl;
        }
        else
        {
            if (hours > 40)
                pay = (40 * rate) + (hours - 40) * rate * 1.5;
            else
                pay = hours * rate;

            totalPay += pay;
            entryCount++;

            cout << fixed << setprecision(2);
            cout << "Last name:   " << lastName << endl;
            cout << "Job code:    " << jobCode << endl;
            cout << "Hours:       " << hours << endl;
            cout << "Pay:         $" << pay << endl << endl;
        }

        cout << "Enter last name, job code (L, A, J), and hours (Ctrl+Z to stop): ";
    }

    if (entryCount > 0)
        averagePay = totalPay / entryCount;
    else
        averagePay = 0.0;

    cout << fixed << setprecision(2);
    cout << endl << "Average pay: $" << averagePay << endl;
    cout << "Number of entries: " << entryCount << endl;

    return 0;
}