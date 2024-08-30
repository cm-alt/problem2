#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int numberoHours , numberoDays, numberominuts, numberoSecond;
    cout << "Please enter numberoHours: ";
    cin >> numberoHours;    
    cout << "Please enter numberoDays: ";
    cin >> numberoDays;    
    cout << "Please enter numberominuts: ";
    cin >> numberominuts;    
    cout << "Please enter numberoSecond: ";
    cin >> numberoSecond;    
 int TotalSeconds =(numberoDays *24 *pow(60,2));+
     (numberoHours *pow(60,2) ); +
     (numberominuts *60) +
     (numberoSecond);






    cout << "Print Total Seconds : " << round(TotalSeconds) << "\n";
// Write a program to calculate the task duration in seconds and print it on screen
// Given the time duration of a task in the number of days, hours, minutes, and seconds,.

//  #42

    return 0;
}
