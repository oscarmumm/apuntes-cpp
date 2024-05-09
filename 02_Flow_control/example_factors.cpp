#include <iostream>
using namespace std;
int main()
{
    //this program print all the factors of a number
    int number = 75;
    cout << "Factors of " << number << " are ";
    for(int i = 1; i <= number ; i++)
    {
        //if the number is divisible by i
        // i is the factor
        if(number % i == 0)
        {
            cout << i << ", ";
        }
    }
    return 0;
}