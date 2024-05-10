#include <iostream>
using namespace std;

int main()
{
    int data[3];

    //take input and store it an array
    cout << "Enter 3 elements: " << endl;
    for(int i = 0; i < 3; i++)
    {
        cin >> data[i];
    }
    //print the array elements
    for(int i = 0; i < 3; i++)
    {
        cout << data[i] << " ";
    }
    return 0;
}