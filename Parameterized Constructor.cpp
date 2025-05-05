#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    // Parameterized Constructor
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Constructor called for " << name << " with age " << age << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Creating objects with parameterized constructor
    Student s1("Dhoni", 42);
    Student s2("Sachin", 50);

    // Displaying information
    s1.display();
    s2.display();

    return 0;
}
