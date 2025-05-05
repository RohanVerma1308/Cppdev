#include <iostream>
using namespace std;

// User-defined function to add two integers
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Calling the user-defined function
    int result = add(num1, num2);

    cout << "Sum = " << result << endl;

    return 0;
}
