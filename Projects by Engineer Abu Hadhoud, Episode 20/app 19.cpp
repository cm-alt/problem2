#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a;
    cout << "Please enter a: ";
    cin >> a;
    
    double pi = 3.14;
    
    // قم بتخزين القيمة المُعادة من ceil(a) في متغير مناسب
    double rounded_a = ceil(a);
    
    // استخدم المتغير rounded_a كمعامل لدالة pow()
    float area = pi * pow(rounded_a, 2);
    
    cout << "Rounded a: " << rounded_a << "\n";
    cout << "Area: " << area << "\n";
    // solution #18

    return 0;
}
