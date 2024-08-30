#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Please enter Loon Amount : ";
    int LoonAmount;
    cin >> LoonAmount;
    cout << "Please enter Monthly Installment : ";
    int MonthlyInstallment;
    cin >> MonthlyInstallment;
int TotalManths= LoonAmount / MonthlyInstallment;
    cout << "Total Months : " << TotalManths << endl;
    return 0;
}
//بيحسبلك لو اخدت قرض كمثال 5000 وانت بتدخل 500 كل شهر في قدامك 10 شهور وتكون خلصت الدين اللي عليك 
// solution #47

