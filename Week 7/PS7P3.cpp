//3. Enter destination city, miles travelled to get there and gallons of gasoline used for any number
//of trips entered at the keyboard(use ctl + z to stop).Compute miles per gallon(miles travelled /
//gallons used).Display the destination city and miles per gallon for each trip entered.Sum the
//miles travelled and give a count of the number of trips made.Display these at the end of the
//program.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string destinationCity;
    double miles, gallons, mpg;
    double totalMiles = 0.0;
    int tripCount = 0;

    cout << "Enter destination city, miles travelled to get there, and gallons of gasoline used for this trip (Ctrl+Z to stop): ";

    //Loop ends when input fails, which happens on Ctrl+Z (EOF)
    while (cin >> destinationCity >> miles >> gallons)
    {
        if (gallons > 0)
            mpg = miles / gallons;
        else
            mpg = 0.0;

        totalMiles += miles;
        tripCount++;

        cout << fixed << setprecision(2);
        cout << "Destination:      " << destinationCity << endl;
        cout << "Miles per gallon: " << mpg << endl << endl;

        cout << "Enter destination city, miles travelled to get there, and gallons of gasoline used for this trip (Ctrl+Z to stop): ";
    }

    cout << endl << "Total miles traveled: " << totalMiles << endl;
    cout << "Number of trips made: " << tripCount << endl;

    return 0;
}