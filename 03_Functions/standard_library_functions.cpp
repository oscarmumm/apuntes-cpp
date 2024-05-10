#include <iostream>
/* in this case, iostream is a library 
we will import another library to work with
*/
#include <cmath>
#include <cctype>
using namespace std;

int main()
{
    int number = 25;
    double square_root;
    // in this case we will use sqrt() function from <cmath> library
    square_root = sqrt(number);
    cout << square_root << endl; // output 25

    char c1 = 'g';
    // in this case we will use isdigit() function from <cctype> library
    if(isdigit(c1))
    {
        cout << c1 << " is a numeric character";
    }
    else
    {
        cout << c1 << " is a non numeric character";
    }
    return 0;
}