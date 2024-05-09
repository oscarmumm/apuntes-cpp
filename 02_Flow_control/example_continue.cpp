#include <iostream>
using namespace std;

int main()
{
    /*
    This program takes 5 inputs from the user. If the user
    enters a positive number or zero, it is printed*/
    int number;
    for(int i = 1; i <= 5; i++)
    {
        cout << "Enter a number: ";
        cin >> number;
        if(number < 0)
        {
            continue;
        }
        cout << "Number is: " << number << endl;
    }
    return 0;
}