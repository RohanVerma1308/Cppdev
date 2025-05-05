#include <iostream>
using namespace std;

class Player {
    string name;
    int runs;

public:
    // Parameterized Constructor
    Player(string n, int r) {
        name = n;
        runs = r;
    }

    // Copy Constructor
    Player(const Player &p) {
        name = p.name;
        runs = p.runs;
        cout << "Copy Constructor called for " << name << endl;
    }

    void display() {
        cout << "Name: " << name << ", Runs: " << runs << endl;
    }
};

int main() {
    Player p1("Sachin", 18000);   // Original object
    Player p2 = p1;               // Copy constructor is called

    cout << "Original Player: ";
    p1.display();

    cout << "Copied Player: ";
    p2.display();

    return 0;
}
