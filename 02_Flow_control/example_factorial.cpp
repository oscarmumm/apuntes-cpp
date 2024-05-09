#include <iostream>
using namespace std;

int main()
{
    // this program returns the factorial of number 10
    int num = 10;
    int factorial = 1;
    // show error if num is negative
    if(num < 0)
    {
        cout << "Error" << endl;
    }
    // if num is non-negative
    else{
        for(int i = 2; i <= num; i++)
        {
            factorial *= i;
        }
        cout << "Factorial of " << num << " = " << factorial << endl;
    }
    return 0;
}