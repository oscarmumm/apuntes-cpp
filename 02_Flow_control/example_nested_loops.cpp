#include <iostream>
using namespace std;

int main()
{
    //outer loop
    for(int i = 1; i <= 2; ++i)
    {
        //inner loop
        for(int j = 1; j <= 3; ++j)
        {
            cout << "i = " << i << ", j = " << j << endl;
        }
        cout << endl;
    }
    return 0;
}