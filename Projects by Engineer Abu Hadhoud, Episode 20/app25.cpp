#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num , m;
    cout << "Please enter num: ";
    cin >> num;    
    cout << "Please enter m: ";
    cin >> m;    
int p = 1;
int count = 0;
if( m == 0){
    cout<< p<< "\n";
}
else{
    p= p*num;
    count = count + 1;
    if(count == m){
cout << p << "\n";
    }
    else{
        p = p*num;
        count = count + 1;
        cout << p << "\n";

    }
}


    cout << "Rounded area: " << round(p) << "\n";
    // solution Write a program to ask the user to enter: • Number
// Then Print the Number^2 , Number^3 , Number^4
 #32

    return 0;
}
