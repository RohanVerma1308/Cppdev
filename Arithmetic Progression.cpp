#include <iostream>

using namespace std;

int main() {
    int a, d, n;

    cout << "Enter the first term (a): ";
    cin >> a;

    cout << "Enter the common difference (d): ";
    cin >> d;

    cout << "Enter the number of terms (n): ";
    cin >> n;

    cout << "\nArithmetic Progression:\n";

    for (int i = 0; i < n; ++i) {
        int term = a + i * d;
        cout << term << " ";
    }

    cout << "\n";

    return 0;
}
