#include <iostream>
using namespace std;

int main()
{
    float P, R, T, SI;
    
    cout << "Enter the Principal amount: ";
    cin >> P;

    cout << "Enter the Rate of interest: ";
    cin >> R;

    cout << "Enter the Time period: ";
    cin >> T;

    SI = (P * R * T) / 100;

    cout << "The Simple Interest is: " << SI;

    return 0;
}
