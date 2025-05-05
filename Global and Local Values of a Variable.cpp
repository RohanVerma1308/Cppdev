#include <iostream>
using namespace std;

// Global variable
int value = 100;

void showValues() {
    // Local variable with the same name
    int value = 50;

    cout << "Local value: " << value << endl;
    cout << "Global value: " << ::value << endl;  // Use scope resolution to access global variable
}

int main() {
    showValues();
    return 0;
}
