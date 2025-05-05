#include <iostream>
using namespace std;

// Function to swap two numbers using call by reference
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside function - a: " << a << ", b: " << b << endl;
}

int main() {
    int x = 10, y = 20;

    // Displaying original values
    cout << "Before swap - x: " << x << ", y: " << y << endl;

    // Calling swap function by reference
    swap(x, y);

    // Displaying values after swap
    cout << "After swap - x: " << x << ", y: " << y << endl;

    return 0;
}
