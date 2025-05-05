#include<iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal eats food" << endl;
    }
};

class Mammal {
public:
    void breathe() {
        cout << "Mammal breathes air" << endl;
    }
};

class Dog : public Animal, public Mammal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog d;
    d.eat();   // From Animal class
    d.breathe(); // From Mammal class
    d.bark();   // From Dog class

    return 0;
}