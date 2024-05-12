#include <iostream>
using namespace std;
/*
We can create an array of arrays. These arrays are known
as two dimensional array. An array can also be of more than two dimensions
*/
int main()
{
    // create an initialize a two dimensaional array
    int data[3][2] =
    {
        {2, 4},
        {3, 6},
        {4, 8}
    };

    // use a nested for loop to print the elements
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout << data[i][j] << " ";
        }
    }
    return 0;
    // It's common to use 2D arrays as matrices
}