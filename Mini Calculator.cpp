#include <iostream>
using namespace std;

int main()
{
    int Choice;
    float num1, num2, result;

    while (true)
    {
        cout << "\n--- Mini Calculator ---\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";

        cout << "Enter Your Choice: ";
        cin >> Choice;

        if (Choice == 5)
        {
            cout << "Exiting the calculator. Goodbye!" << endl;
            break;
        }

        if (Choice >= 1 && Choice <= 4)
        {
            cout << "Enter Two Numbers: ";
            cin >> num1 >> num2;
        }

        switch (Choice)
        {
            case 1:
                result = num1 + num2;
                cout << "Result: " << result << endl;
                break;
            case 2:
                result = num1 - num2;
                cout << "Result: " << result << endl;
                break;
            case 3:
                result = num1 * num2;
                cout << "Result: " << result << endl;
                break;
            case 4:
                if (num2 != 0)
                {
                    result = num1 / num2;
                    cout << "Result: " << result << endl;
                }
                else
                {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
            default:
                cout << "Invalid Choice. Please select a valid option." << endl;
        }
    }

    return 0;
}
