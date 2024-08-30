#include <iostream>
using namespace std;

int main()
{
    int billvalue;
    cout << "Please enter bill value: ";
    cin >> billvalue;
    
    // حساب المبلغ الإجمالي بعد إضافة 10% ثم 16% ضريبة
    double totalbil = billvalue * 1.1; // إضافة 10%
    totalbil = totalbil * 1.16; // إضافة 16% ضريبة
    
    cout << "Total bill: " << totalbil << "\n";
    
    return 0;
}

// solution #40

