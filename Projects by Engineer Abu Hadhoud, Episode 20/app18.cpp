#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Please enter Loon Amount : ";
    int LoonAmount;
    cin >> LoonAmount;
    cout << "Please enter How Many Month : ";
    int HowManyMonth;
    cin >> HowManyMonth;
int MonthlyIstallment= LoonAmount / HowManyMonth;
    cout << "Total Months : " << MonthlyIstallment << endl;
    return 0;
}
// solution #48

