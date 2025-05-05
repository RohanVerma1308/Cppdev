#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename;
    cout << "Enter the filename to read: ";
    getline(cin, filename);

    ifstream file(filename);  // Open the file for reading

    if (!file.is_open()) {
        cerr << "Error: Could not open the file \"" << filename << "\"." << endl;
        return 1;
    }

    string line;
    cout << "\nContents of the file:\n\n";
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();  // Close the file
    return 0;
}
