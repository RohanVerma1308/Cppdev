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

    // Overload binary + operator
    Number operator+(const Number& other) const {
        return Number(value + other.value);
    }
};

int main() {
    Number num1(30);
    Number num2(20);

    cout << "First ";
    num1.display();

    cout << "Second ";
    num2.display();

    Number sum = num1 + num2;  // Calls overloaded + operator
    cout << "Sum ";
    sum.display();

    return 0;
}
