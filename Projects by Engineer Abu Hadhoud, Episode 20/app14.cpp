#include <iostream>
using namespace std;

int main()
{
    int billvalue;
    cout << "Please enter of days ";
    int numbersofdays;
    cin>> numbersofdays;
    cout << "Please enter of hours ";
    int numbersofhours;
    cin >> numbersofhours;
    cout << "Please enter of minutes ";
    int numbersofminutes;
    cin >> numbersofminutes;
    cout << "Please enter of second ";
    int numbersofsecond;
    cin>> numbersofsecond;
int totalseconds =(numbersofdays*24*60*60)+
                        (numbersofhours*60*60)+
                        (numbersofminutes*60)+
                        (numbersofsecond);
                        cout << "Total seconds is " << totalseconds << endl;
    return 0;

}

// solution #42

