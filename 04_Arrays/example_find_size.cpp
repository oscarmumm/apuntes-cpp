#include <iostream>
using namespace std;
/*
the sizeof() function computes the total space required for the specified data.
The logic for finding the array size (total no. of elements in an array) is as follows
array_memory = total memory occupied by the array
element_memory = memory occupied by a single array element
array_size = array_memory / element_memory
*/

int main()
{
    int data[5], size;
    size = sizeof(data)/sizeof(data[0]);
    cout << "Array size = " << size;
    return 0;
}