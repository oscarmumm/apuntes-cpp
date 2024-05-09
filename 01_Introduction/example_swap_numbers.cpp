#include <iostream>
using namespace std;

int main()
{
    int num1 = 5, num2 = 10;
    cout << "num1 (before swap) = " << num1 << endl;
    cout << "num2 (before swap) = " << num2 << endl;
    // to swap values we use an aux variable
    int aux;
    aux = num1;
    num1 = num2;
    num2 = aux;
    cout << "num1 (after swap) = " << num1 << endl;
    cout << "num2 (after swap) = " << num2 << endl;
    return 0;
}