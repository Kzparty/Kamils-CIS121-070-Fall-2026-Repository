//2. Allow any number of players to enter last name, number of hits and at bats at the keyboard
//(use ctl + z to stop).Compute batting average(hits / at bats).Display last name and batting
//average for each player.Keep a count of the number of players(or entries) made.Display the
//count after all entries have been made.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string lastName;
    int hits, atBats;
    double average;
    int playerCount = 0;

    cout << "Enter last name, hits, and at bats (Ctrl+Z to stop): ";

    //Loop ends when input fails, which happens on Ctrl+Z (EOF)
    while (cin >> lastName >> hits >> atBats)
    {
        if (atBats > 0)
            average = static_cast<double>(hits) / atBats;
        else
            average = 0.0;

        playerCount++;

        cout << fixed << setprecision(3);
        cout << "Last name:         " << lastName << endl;
        cout << "Batting average:   " << average << endl << endl;

        cout << "Enter last name, hits, and at bats (Ctrl+Z to stop): ";
    }

    cout << endl << "Number of players entered: " << playerCount << endl;

    return 0;
}