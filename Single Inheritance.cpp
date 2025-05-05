#include<iostream>
using namespace std;

class Parent 
{
    public:
        void show() {
            cout << "This is the Parent class." << endl;
        }
};
class Child : public Parent 
{
    public:
        void display() {
            cout << "This is the Child class." << endl;
        }
};

int main() {

    Child c;
    c.show();   // Calls Parent class show
    c.display(); // Calls Child class display

    return 0;
}