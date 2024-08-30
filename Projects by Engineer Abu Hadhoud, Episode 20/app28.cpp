
    
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int TotalSeconds;
    cout << "Please enter TotalSeconds: ";
    cin >> TotalSeconds;    
    
    int NumbersPerDays = 20 * pow(60, 2);
    int NumbersPerHours = pow(60, 2);
    int NumbersPerMinutes = 60;

    int NumberOfDays = floor(TotalSeconds / NumbersPerDays);
    int Remainder = TotalSeconds % NumbersPerDays;
    int NumberOfHours = floor(Remainder / NumbersPerHours);
    Remainder = Remainder % NumbersPerHours;
    int NumberOfMinutes = floor(Remainder / NumbersPerMinutes);
    Remainder = Remainder % NumbersPerMinutes;
    int NumberOfSeconds = Remainder;

    cout << "Number of Days: " << NumberOfDays << "\n";
    cout << "Number of Hours: " << NumberOfHours << "\n";
    cout << "Number of Minutes: " << NumberOfMinutes << "\n";
    cout << "Number of Seconds: " << NumberOfSeconds << "\n";

    return 0;
}

// Write a program that inputs the number of seconds and changes it to days, hours, minutes, and seconds
// #43
    

