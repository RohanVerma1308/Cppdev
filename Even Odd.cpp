#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter Your Number: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << n << " is Even" << endl;
    } else {
        cout << n << " is Odd" << endl;
    }

    return 0;
}
