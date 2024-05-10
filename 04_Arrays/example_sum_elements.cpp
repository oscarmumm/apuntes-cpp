#include <iostream>
using namespace std;

int main()
{
    int num[5] = {45, 39, 32, 29, 41};
    int sum = 0;

    //use for loop to find sum
    for(int i = 0; i < 5; i++)
    {
        sum += num[i];
    }
    cout << "Sum = " << sum << endl;
    return 0;
}