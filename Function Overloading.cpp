#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add two floats
float add(float a, float b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    // Calling different overloaded functions
    cout << "Sum of 3 and 4 (int): " << add(3, 4) << endl;
    cout << "Sum of 3.5 and 2.5 (float): " << add(3.5f, 2.5f) << endl;
    cout << "Sum of 1, 2, and 3 (int): " << add(1, 2, 3) << endl;

    return 0;
}
