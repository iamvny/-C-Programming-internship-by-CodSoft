// WAP of Simple Calculator in C++
#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    double num1, num2;
    char op;

    // Ask the user to enter the expression
    cout << "Enter the expression in the form of num1 op num2: ";
    cin >> num1 >> op >> num2;

    // Perform the operation based on the operator
    switch (op)
    {
    case '+':
        cout << "The result is: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "The result is: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "The result is: " << num1 * num2 << endl;
        break;
    case '/':
        // Check for division by zero
        if (num2 == 0)
        {
            cout << "Error: Division by zero" << endl;
        }
        else
        {
            cout << "The result is: " << num1 / num2 << endl;
        }
        break;
    default:
        // Invalid operator
        cout << "Error: Invalid operator" << endl;
    }

    return 0;
}
