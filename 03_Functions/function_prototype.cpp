#include <iostream>
using namespace std;
/*
In C++ if we call a function before defining it, we will get an error.
To solve this issue, we can use a function prototype
A function prototype is a declaration that tells the compiler about the name,
type of the arguments and return type of the function.
*/

// function prototype
int add_numbers(int, int);

int main()
{
    //function call
    int result = add_numbers(6, 8);
    cout << "Sum = " << result;
    return 0;
}

// function definition
int add_numbers(int n1, int n2)
{
    int sum = n1 + n2;
    return sum;
}