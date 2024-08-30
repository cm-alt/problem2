#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a;
    cout << "Please enter a: ";
    cin >> a;
    
    double pi = 3.14;
    
    double area =  pow(a, 2) / (4 * pi);
    
    cout << "Rounded a: " << static_cast<int>(floor(area)) << "\n";
    // solution #21

    return 0;
}
