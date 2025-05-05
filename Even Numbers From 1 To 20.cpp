#include <iostream>
using namespace std;

int main()
{
    cout << "Even numbers from 1 to 20 are:" << endl;

    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
            cout << i << " ";
    }

    return 0;
}
