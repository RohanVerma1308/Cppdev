#include <iostream>
using namespace std;

int main() {
    int num = 50;         // Declare an integer variable
    int* ptr;             // Declare a pointer to int

    ptr = &num;           // Store the address of num in ptr

    // Displaying the value and address
    cout << "Value of num: " << num << endl;
    cout << "Address of num (&num): " << &num << endl;
    cout << "Value of ptr (address it holds): " << ptr << endl;
    cout << "Value pointed to by ptr (*ptr): " << *ptr << endl;

    // Changing value of num using pointer
    *ptr = 100;

    // Displaying updated value
    cout << "Value of num after modifying through pointer: " << num << endl;

    return 0;
}
