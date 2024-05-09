#include <iostream>
using namespace std;

int main()
{
    /*
    Break: ends the entire loop
    Continue: skips the code after if for that iteration of the loop
    */
    int number, sum = 0;
    for(int i = 1; i <= 10; i++)
    {
        cout << "Enter a number: " << endl;
        cin >> number;
        // condition to break the loop
        if(number < 0)
        {
            break;
        }
        cout << "Number is: " << number << endl;
    }
    return 0;
}