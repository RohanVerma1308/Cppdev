#include <iostream>
using namespace std;

// Define a class named 'Student'
class Student {
    // Private data members
    int rollNo;
    string name;

public:
    // Function declarations (prototypes)
    void setData(int r, string n);
    void displayData();
};

// Function definitions (defined outside the class)

// Set data for student
void Student::setData(int r, string n) {
    rollNo = r;
    name = n;
}

// Display student data
void Student::displayData() {
    cout << "Roll Number: " << rollNo << endl;
    cout << "Name: " << name << endl;
}

int main() {
    Student s1;  // Create an object of Student

    // Call member functions
    s1.setData(1224, "Rohan");
    s1.displayData();

    return 0;
}
