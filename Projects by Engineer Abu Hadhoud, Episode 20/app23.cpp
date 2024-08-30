#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a , b , c;
    cout << "Please enter a: ";
    cin >> a;
    
    cout << "Please enter b: ";
    cin >> b;
    cout << "Please enter c: ";
    cin >> c;
    
    int  pi = 3.14;
    int p = (a+b +c) /2;
    int t = (a*b*c) / (4* sqrt(p*(p-a) * (p-b) * (p-c)));
    t = pow(t,2);
    int area = pi *t ;
    cout << "Rounded area: " << round(area) << "\n";
    // solution Write a program to calculate circle area circle described around an arbitrary triangle, 
// then print it on the screen. #23

    return 0;
}
