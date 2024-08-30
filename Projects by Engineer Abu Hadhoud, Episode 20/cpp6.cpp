#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a , b;
    cout << "Please enter a: ";
    cin >> a;

    cout << "Please enter b: ";
    cin >> b;

    int area = a * sqrt(pow(b, a));
    cout << "Area: " << area << "\n";

    return 0;
    // solution #16

}
