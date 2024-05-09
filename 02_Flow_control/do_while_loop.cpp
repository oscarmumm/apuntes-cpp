#include <iostream>
using namespace std;

int main()
{
    /*
    The main diference between a while loop and a do while loop
    is that the last executes al least once
    Syntax:
    do
    {
        loop body
    }
    while(condition)
    */
    int i = 1;
    do
    {
        cout << i << endl;
        i++;
    } while (i < 1);

    return 0;
}