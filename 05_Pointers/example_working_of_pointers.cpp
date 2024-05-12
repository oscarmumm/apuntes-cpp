#include <iostream>
using namespace std;

int main()
{
    /* Here a pointer variable pc and a regular variable c with 
    value 22 are created. Since pc is not initialized, pc contains
    a random address at the moment.*/
    int *pc, c = 22;

    cout << "Address of c: " << &c << endl;
    cout << "Value of c: " << c << "\n\n";

    /* The address of c is assigned to the pc pointer. 
    Now the address of c and the content of pc will be the same.
    And, the value stored in the pc address will be 22. */
    pc = &c;
    cout << "Content in pc: " << pc << endl;
    cout << "Value stored in pc address: " << *pc << "\n\n";

    /* This assign 11 to the variable c. Now, the value stored
    in the address pc and c will be 11. */
    c = 11;
    cout << "Value stored in pc address: " << *pc << "\n\n";

    /* This changes the value at the memory location pointed by pc to 2.
    Now the value of c will also be 2.
    It's because the address of c and memory location pointed by pc are the same. */
    *pc = 2;
    cout << "Value of c: " << c;

    return 0;
    /* Common pointer mistakes:
    
    int c, * pc;
    
    // pc is address but c is not
    pc = c      //ERROR

    // &c is address but *pc is not
    *pc = &c    //ERROR

    // both &c and pc are addresses
    pc = &c     //VALID

    //both c and *pc are values
    *pc = c     //VALID
    */
}