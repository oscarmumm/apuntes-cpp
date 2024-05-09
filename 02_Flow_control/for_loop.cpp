#include <iostream>
using namespace std;

int main()
{
    /*
    A for loop is use to repeat a block of code
    The loop runs as long as the condition is true
    If the test condition never evaluates to false, the loop runs endlessly (infinite loop)
    
    Syntax:
    for ( initialization; condition; update )
    {
        loop body
    }
    Example:
    */
    for (int i = 0; i < 10; i++)
    {
        cout << "Loop n° " << i << endl;
    }
    return 0;
}