#include <iostream>

using namespace std;

int main()
{
    double num1, num2, product;
    cout << "This program multiplies two double numbers" << endl;
    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;
    product = num1 * num2;
    cout << "The product is: " << product << endl;
    return 0;
}