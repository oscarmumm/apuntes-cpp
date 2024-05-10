#include <iostream>
using namespace std;
/*
 we can also pass values to a function.these values are known as arguments
 */

// int number is the function parameter
void print_number(int number)
{
    cout << number;
}

int main()
{
    int n = 10;
    // pass n as argument
    print_number(n);
    return 0;
}