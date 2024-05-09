#include <iostream>
using namespace std;

int main()
{
    // the program below finds the first number thats greater than 50 and divisible by 7
    int number = 51;
    while (true)
    {
        if(number % 7 == 0)
        {
            break;
        }
        ++number;
    }
    cout << number;
    return 0;
}