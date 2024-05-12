#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {3, 4, -8, 9, 1};

    // consider first element to be largest
    int largest = arr[0];

    // run loop from second element
    for (int i = 1; i < 5; i++)
    {
        // if current element is greater than largest
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "Largest element = " << largest;
    return 0;
}