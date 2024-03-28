#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    char operation;
    double num1, num2, result;

    cout << "Enter operator:" << endl
         << "Addition: +" << endl
         << "Subtraction: -" << endl
         << "Multiplication: *" << endl
         << "Division: /" << endl;
    cin >> operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (operation)
    {
    case '+':
        result = num1 + num2;
        cout << "Result: " << num1 << "+" << num2 << "=" << result;
        break;

    case '-':
        result = num1 - num2;
        cout << "Result: " << num1 << "-" << num2 << "=" << result;
        break;

    case '*':
        result = num1 * num2;
        cout << "Result: " << num1 << "*" << num2 << "=" << result;
        break;

    case '/':
        if (num2 == 0)
        {
            cout << "Error! Division by zero is not allowed.";
        }
        else
        {
            result = num1 * num2;
            cout << "Result: " << num1 << "*" << num2 << "=" << result;
        }
        break;

    default:
        cout << "Invalid Operator!";
        break;
    }

    return 0;
}
