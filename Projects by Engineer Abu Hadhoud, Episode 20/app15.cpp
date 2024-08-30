#include <iostream>
using namespace std;

int main()
{
    cout << "plase enter total days ";
    int NumberOfdays;
    cin >> NumberOfdays;
    cout << "plase enter total Hours "; 
    int NumberOfHours;
    cin >> NumberOfHours;
    cout << "plase enter total Minutes "; 
    int NumberOfMinutes;
    cin >> NumberOfMinutes;
    cout << "plase enter total Seconds "; 
    int NumberOfSeconds;
    cin >> NumberOfSeconds;
    int TotalSeconnd = (NumberOfdays *24*60*60)+
    (NumberOfHours *60*60)+ 
    (NumberOfMinutes *60)+
    (NumberOfSeconds);
    cout << "Total Seconds is " << TotalSeconnd << endl;
    return 0;

    // بيحسب عملت كل مهمه في وقت بالثانيه قد ايه 

}

// solution #42

