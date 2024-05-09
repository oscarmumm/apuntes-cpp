#include <iostream>
using namespace std;

int main()
{
    /*
    switch (expression)
    {
    case value1:
        codeBlock1
        break;
    case value2:
        codeBlock2
        break;
    default:
        codeBlockDefault
        break;
    }

    In this program we will make a simple calculator
    */
    char op;
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the operation (+, -, * or /): ";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << "Result = " << (num1 + num2);
        break;
    case '-':
        cout << "Result = " << (num1 - num2);
        break;
    case '*':
        cout << "Result = " << (num1 * num2);
        break;
    case '/':
        cout << "Result = " << (num1 / num2);
        break;
    default:
        cout << "Invalid operator" << endl;
        break;
    }
    return 0;
}