#include <iostream>
using namespace std;

// Function to calculate the square of a number (call by value)
void calculateSquare(int num) {
    num = num * num;  // modify the local copy of num
    cout << "Square inside the function: " << num << endl;
}

int main() {
    int number = 5;

    // Displaying the original number
    cout << "Original number: " << number << endl;

    // Passing the number to the function (call by value)
    calculateSquare(number);

    // Displaying the number after function call
    cout << "Original number after function call: " << number << endl;

    return 0;
}
