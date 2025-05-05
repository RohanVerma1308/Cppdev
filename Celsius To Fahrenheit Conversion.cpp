#include <iostream>
using namespace std;

int main()
{
    float C, F;
    cout << "Enter Temperature in Celsius: ";
    cin >> C;

    F = C * (9.0 / 5.0) + 32;

    cout << "The Temperature in Fahrenheit is: " << F;

    return 0;
}
