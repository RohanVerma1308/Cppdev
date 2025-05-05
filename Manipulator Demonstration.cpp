#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double prices[] = {123.456, 7.5, 45.789};
    cout << left << setw(10) << "Item" << right << setw(10) << "Price" << endl;
    cout << setfill('-') << setw(20) << "-" << setfill(' ') << endl;

    for (int i = 0; i < 3; ++i) {
        cout << left << setw(10) << "Item" << right << setw(10) << fixed << setprecision(2) << prices[i] << endl;
    }

    return 0;
}
