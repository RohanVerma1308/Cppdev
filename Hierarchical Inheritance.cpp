#include<iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal eats food" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "The Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "The Cat meows" << endl;
    }
};

int main() {
    Dog d;
    Cat c;

    cout << "Dog Actions:" << endl;

    d.eat();  // Inherited from Animal class
    d.bark(); // Dog's own method

    cout << "Cat Actions:" << endl;
    c.eat();  // Inherited from Animal class
    c.meow(); // Cat's own method

    return 0;
}