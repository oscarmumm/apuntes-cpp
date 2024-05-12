#include <iostream>
using namespace std;
/*
Syntax:
for(data_type variable : array)
{
    code inside loop
}
*/
int main()
{
    // initialize array
    int num_array[] = {13, 32, 23, 19, 35};

    // use of ranged for loop to print array elements
    for(int var : num_array)
    {
        cout << "var = " << var << endl;
    }
    return 0;
    /*
    the ranged for loop automatically iterates to each
    element of the array. we don't have to especify the number
    of iterations. */
}