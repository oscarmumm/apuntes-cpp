#include <iostream>
using namespace std;
/*
Suppose we have a code like this:

int* pc, c = 5;
//pc contains address of c
pc = &c;

Now to get the value pointed by pc, we use *pc
*/
int main()
{
    int *pc, c = 5;
    //pc contains the adress of c
    pc = &c;

    cout << "Value stored in pc address = " << *pc;
    return 0;
    /*
    Output:
    Value stored in pc address = 5
    */
}