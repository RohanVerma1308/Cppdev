#include <iostream>
#include <string>

using namespace std;

// Define a structure to store student information
struct Student {
    int id;
    string name;
    float marks;
};

int main() {
    Student s;  // Declare a variable of type Student

    // Input student details
    cout << "Enter student ID: ";
    cin >> s.id;

    cin.ignore(); // To clear the newline from the input buffer
    cout << "Enter student name: ";
    getline(cin, s.name);

    cout << "Enter student marks: ";
    cin >> s.marks;

    // Display student details
    cout << "\nStudent Details:\n";
    cout << "ID: " << s.id << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;

    return 0;
}
