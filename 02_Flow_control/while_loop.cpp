#include <iostream>
using namespace std;

int main()
{
    /*
    Syntax:
    while(condition)
    {
        loop body
    }
    */
    int i = 1;
    while(i <= 10)
    {
        cout << "Iteration n° " << i << endl;
        i++;
    }
    // if the test condition never evaluates to false the loop runs forever
    // (infinite while loop)
    return 0;
}