#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("example.txt", ios::in | ios::out | ios::trunc);
    file << "Hello, World!";
    
    file.seekp(7);       // Move write pointer to after "Hello, "
    file << "GPT";       // Overwrites "Wor" with "GPT"
    
    file.seekg(0);       // Move read pointer to beginning
    string content;
    getline(file, content);
    cout << "Modified content: " << content << endl;

    file.close();
}
