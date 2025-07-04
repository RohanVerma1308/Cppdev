#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw()
     { 
        cout << "Generic shape\n";
     }
};

class Circle : public Shape {
public:
    void draw() override
     { 
        cout << "Circle\n"; 
     }
};

class Rectangle : public Shape {
public:
    void draw() override 
    { 
        cout << "Rectangle\n";
    }    
};

int main()
 {
    Shape *s;
    Circle c;
    Rectangle r;

    s = &c; s->draw();
    s = &r; s->draw();

    return 0;
}
