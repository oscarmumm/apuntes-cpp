#include <iostream>
using namespace std;
/*
Pointer is a powerful feature of C++ programming language.
Pointers allow us to work with adresses
*/
int main()
{
    int  var = 5;
    cout << "var = " << var << endl;
    // we have used &var here
    cout << "address of var = " << &var;
    return 0;
    /*
    Output:
    var = 5
    address of var = 0x372a1ff75c

    This means 5 is stored at this starting adress.
    Notice that we used &var instead of var in the cout.
    It's because we want to print the address of var not the value.

    A pointer is a special variable that stores an address rather than a value.

    Regular variables: stores a value.
    Pointers: stores an address.
    */
}