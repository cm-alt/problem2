#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a;
    cout << "Please enter a: ";
    cin >> a;
    int d;
    cout << "Please enter d: ";
    cin >> d;
    
    int  pi = 3.14;
    
    double area = (pi * pow(d, 2) / 4) * ((2 * a) - d) * ((2 * a) + d);
    
    cout << "Rounded area: " << floor(area) << "\n";
    // solution #22

    return 0;
}
