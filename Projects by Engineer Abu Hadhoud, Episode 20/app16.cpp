#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Please enter total seconds: ";
    int TotalSecond;
    cin >> TotalSecond;
    int SecondPerDay = 24 * 60 * 60;
    int SecondPerHour = 60 * 60;
    int SecondPerMinute = 60;

    int NumbersOfDays = TotalSecond / SecondPerDay;
    int Remainder = TotalSecond % SecondPerDay;

    int NumbersOfHours = Remainder / SecondPerHour;
    Remainder = Remainder % SecondPerHour;

    int NumbersOfMinutes = Remainder / SecondPerMinute;
    Remainder = Remainder % SecondPerMinute;

    int NumbersOfSeconds = Remainder;

    cout << NumbersOfDays << " days, " << NumbersOfHours << " hours, " << NumbersOfMinutes << " minutes, " << NumbersOfSeconds << " seconds" << endl;

    return 0;
}

// بتدخل عدد ثواني بيحسبهملك ايام و ساعات و دقائق 


// solution #43

