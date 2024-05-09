#include <iostream>
using namespace std;

int main()
{
    int first, second;
    cout << "Enter two numbers: ";
    cin >> first >> second;
    if(first > second)
    {
        cout << first << " is greater than " << second << endl;
    }
    else if (second > first)
    {
        cout << second << " is greater than " << first << endl;
    }
    else
    {
        cout << first << " and " << second << " are equal" << endl;
    }
    
    return 0;
}