#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void breathe() {
        cout << "Animal breathes" << endl;
    }
};

// Derived class 1 from Animal
class Mammal : public Animal {
public:
    void feedMilk() {
        cout << "Mammal feeds milk to young ones" << endl;
    }
};

// Derived class 2 from Animal
class Carnivore : public Animal {
public:
    void eatMeat() {
        cout << "Carnivore eats meat" << endl;
    }
};

// Child class inherits from both Mammal and Carnivore (Hybrid)
class Lion : public Mammal, public Carnivore {
public:
    void roar() {
        cout << "Lion roars" << endl;
    }
};

int main() {
    Lion leo;
    leo.Mammal::breathe();    // Ambiguity resolved by scope
    leo.feedMilk();
    leo.eatMeat();
    leo.roar();
    return 0;
}
