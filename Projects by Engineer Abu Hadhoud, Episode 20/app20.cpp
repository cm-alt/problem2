#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a;
    cout << "Please enter a: ";
    cin >> a;
    
    double pi = 3.14;
    
    
    float area = (pi * pow(a, 2))/4;
    
    cout << "Rounded a: " << area << "\n";
    cout << "Area: " << area << "\n";
    // solution #20

    return 0;
}
