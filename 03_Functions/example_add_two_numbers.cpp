#include <iostream>
using namespace std;

void add(int num1, int num2)
{
    int sum = num1 + num2;
    cout << "Result: " << sum;
}

int main()
{
    //function call with arguments
    add(10, 15);
    return 0;
}