#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;

    // Static member to count number of Student objects
    static int count;

public:
    // Constructor
    Student(string n, int r) {
        name = n;
        rollNo = r;
        count++;  // Increment object count
    }

    // Display student details
    void display() {
        cout << "Name: " << name << ", Roll No: " << rollNo << endl;
    }

    // Static function to display count
    static void showCount() {
        cout << "Total Students created: " << count << endl;
    }

    // Destructor
    ~Student() {
        count--;  // Decrement object count
        cout << "Destructor called for " << name << endl;
    }
};

// Initialize static member
int Student::count = 0;

int main() {
    // Dynamically create Student objects
    Student* s1 = new Student("Rohan", 101);
    Student* s2 = new Student("Aisha", 102);

    // Display details
    s1->display();
    s2->display();

    // Show object count using static function
    Student::showCount();

    // Free memory using delete
    delete s1;
    delete s2;

    // Show count after deletion
    Student::showCount();

    return 0;
}
