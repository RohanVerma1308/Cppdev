#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double A, P, R, N, T;

    cout << "Enter Principal: ";
    cin >> P;

    cout << "Enter Rate: ";
    cin >> R;

    cout << "Enter Time (in years): ";
    cin >> T;

    cout << "Enter Number of times interest is compounded per year: ";
    cin >> N;

    A = P * pow((1 + (R / (N * 100))), N * T);

    cout << "The Compound Amount is: " << A << endl;

    return 0;
}
