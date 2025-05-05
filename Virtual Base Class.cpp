#include <iostream>
using namespace std;

// Base class
class Person {
public:
    void display() {
        cout << "Person class called." << endl;
    }
};

// Derived classes from Person using virtual inheritance
class Student : virtual public Person {
public:
    void showStudent() {
        cout << "Student class called." << endl;
    }
};

class Teacher : virtual public Person {
public:
    void showTeacher() {
        cout << "Teacher class called." << endl;
    }
};

// Derived class from both Student and Teacher
class TA : public Student, public Teacher {
public:
    void showTA() {
        cout << "TA (Teaching Assistant) class called." << endl;
    }
};

int main() {
    TA ta;
    ta.display();        // Only one copy of Person's display() due to virtual inheritance
    ta.showStudent();
    ta.showTeacher();
    ta.showTA();
    return 0;
}
