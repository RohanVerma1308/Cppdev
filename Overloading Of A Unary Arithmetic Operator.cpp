#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Constructor
    Number(int v = 0) : value(v) {}

    // Display function
    void display() const {
        cout << "Value: " << value << endl;
    }

    // Overload unary minus (-) operator
    Number operator-() const {
        return Number(-value);
    }
};

int main() {
    Number num1(25);
    cout << "Original ";
    num1.display();

    Number num2 = -num1; // Calls overloaded unary minus
    cout << "After applying unary minus ";
    num2.display();

    return 0;
}
