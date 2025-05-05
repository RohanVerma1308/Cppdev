#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    // Constructor to initialize length
    Box(int l) {
        length = l;
    }

    // Declare friend function
    friend void printLength(Box b);
};

// Friend function definition
void printLength(Box b) {
    // Accessing private data member directly
    cout << "Length of the box: " << b.length << endl;
}

int main() {
    Box b1(10);  // Create object of Box class

    // Call friend function
    printLength(b1);

    return 0;
}
