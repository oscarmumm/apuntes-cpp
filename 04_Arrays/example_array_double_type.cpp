#include <iostream>
using namespace std;

int main()
{
    double arr[5] = {8.5, -4.3, -12.8, 9.9, 11.2};
    cout << "Array elements: ";
    // run loop from second element
    for(double item : arr)
    {
        cout << item << ", ";
    }
    return 0;
}