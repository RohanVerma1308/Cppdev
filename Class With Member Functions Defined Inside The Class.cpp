#include <iostream>
using namespace std;

// Define a class named 'Student'
class Student {
    // Private data members
    int rollNo;
    string name;

public:
    // Member function to set data (defined inside the class)
    void setData(int r, string n) {
        rollNo = r;
        name = n;
    }

    // Member function to display data (defined inside the class)
    void displayData() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1;  // Create an object of Student

    // Call member functions
    s1.setData(1224, "Rohan");
    s1.displayData();

    return 0;
}
