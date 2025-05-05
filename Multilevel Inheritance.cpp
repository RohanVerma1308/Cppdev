#include<iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is Eating" << endl;
    }
};

class Mammal : public Animal {
public:
    void sleep() {
        cout << "Mammal is Sleeping" << endl;
    }
};

class Dog : public Mammal {
public:
    void bark() {
        cout << "Dog is Barking" << endl;
    }
};

int main() {
    Dog d;
    d.eat();   // From Animal class
    d.sleep(); // From Mammal class
    d.bark();  // From Dog class

    return 0;
}

