#include <iostream>
#include <fstream>  // For ofstream
using namespace std;

int main() {
    // Create an ofstream object
    ofstream outFile;

    // Open a file named "output.txt"
    outFile.open("output.txt");

    // Check if the file opened successfully
    if (!outFile) {
        cerr << "File could not be opened!" << endl;
        return 1;
    }

    // Write data to the file
    outFile << "Hello, this is a test file.\n";
    outFile << "Writing more lines of text...\n";
    outFile << "End of file writing.\n";

    // Close the file
    outFile.close();

    cout << "Data successfully written to output.txt" << endl;
    return 0;
}
