#include <iostream>
using namespace std;

int main()
{
    // this loop calculates the sum of th e first 100 natural numbers
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum += i;
    }

    cout << "The final value of sum is: " << sum << endl;
    return 0;
}