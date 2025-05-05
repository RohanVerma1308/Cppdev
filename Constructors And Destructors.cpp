#include <iostream>
#include <string>
using namespace std;

class Player {
    string name;
public:
    Player(string n) { // Constructor
        name = n;
        cout << "Constructor called for " << name << endl;
    }
    ~Player() { // Destructor
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    Player p1("Dhoni");
    Player p2("Sachin");

    cout << "Players are ready!" << endl;

    return 0;
}
