#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string sourceFile, destFile;

    cout << "Enter the source filename: ";
    getline(cin, sourceFile);

    cout << "Enter the destination filename: ";
    getline(cin, destFile);

    ifstream inputFile(sourceFile);
    ofstream outputFile(destFile);

    if (!inputFile.is_open()) {
        cerr << "Error: Could not open source file \"" << sourceFile << "\"." << endl;
        return 1;
    }

    if (!outputFile.is_open()) {
        cerr << "Error: Could not create or open destination file \"" << destFile << "\"." << endl;
        return 1;
    }

    string line;
    while (getline(inputFile, line)) {
        outputFile << line << endl;
    }

    cout << "File copied successfully from \"" << sourceFile << "\" to \"" << destFile << "\"." << endl;

    inputFile.close();
    outputFile.close();

    return 0;
}
