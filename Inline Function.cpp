#include <iostream>
using namespace std;

// Inline function to calculate the square of a number
inline int square(int x) {
    return x * x;
}

int main() {
    int num = 5;

    // Call the inline function
    cout << "The square of " << num << " is: " << square(num) << endl;

    // Calling it again to show repeated usage
    cout << "The square of 7 is: " << square(7) << endl;

    return 0;
}
