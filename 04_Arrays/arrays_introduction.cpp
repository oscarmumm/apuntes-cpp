#include <iostream>
using namespace std;

/*
Syntax:
data_type array_name[size]
Example:
int data[5];
Once array is declared its size cannot be changed

Three ways to initialize an array:
int data[5] = {19, 10, 8, 17, 9};
int data[] = {19, 10, 8, 17, 9};
int data[5] = {19, 10}
*/
int main()
{
    //create an array
    int data[] = {12, 19, 13, 12, 17};
    //access array elements
    cout << "1st element: " << data[0] << endl;
    cout << "2nd element: " << data[1] << endl;
    cout << "5th element: " << data[4] << endl;

    cout << "Print all array elements with a for loop: " << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << data[i] << endl;
    }
    //modify array elements
    data[2] = 10;
    data[4] = 100;
    //and print the array again
    cout << "Array modified: " << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << data[i] << endl;
    }
    return 0;
}