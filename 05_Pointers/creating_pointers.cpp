#include <iostream>
using namespace std;
/*
Here's how we declare pointers:
int* ptr;
Here we have declared a pointer ptr of int type.
We can also create pointers in these ways:
int *ptr;
int* ptr, ptr2; Here ptr is a pointer variable and ptr2 is a normal variable
In this case the symbol "*" is part of the syntax of the pointer declaration.
When we declare a pointer, a random address that is not used by the system
is stored in it.
*/
int main()
{
    int *pc, c;
    c = 5;
    // assign address to a pointer
    pc = &c; // this line assigns the address of c to the pc pointer

    cout << "value of pc = " << pc << endl;
    cout << "addres of c = " << &c;
    return 0;
    /*
    Output:
    value of pc = 0x51217ffc14
    addres of c = 0x51217ffc14
*/
}