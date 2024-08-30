

#include <iostream>
using namespace std;

int main()
{

    int pennies, nickels,dimes,quarters, dollars;
    cout << "plase enter pennies ";
    cin >> pennies;
    cout << "plase enter nickels ";
    cin >> nickels;
        cout << "plase enter dimes ";
    cin >> dimes;
        cout << "plase enter quarters ";
    cin >> quarters;
    cout << "plase enter dollars ";
    cin >> dollars;
   int totalpennies = pennies *1 + nickels*5 + dimes *10+  quarters*100;
  int totaldollars = totalpennies /100;
  cout << totalpennies << " pennies" << "\n";
  cout << totaldollars << " Dollars " << "\n";
}
// solution #35

