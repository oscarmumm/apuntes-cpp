#include <iostream>
using namespace std;
/*
Any variable that is defined inside a function is local to it.
When the function ends, these variables are destroyed.*/
void add_numbers(int a, int b)
{
    int sum = a + b;
}

int main()
{
    // function call
    add_numbers(6, 8);
    /*
    if we try to use
    cout << sum;
    we get an error because the variable sum is defined in
    add_numbers function
    if we need that variable we need to return it in add_numbers function

    The concept of local variables is a good thing.
    Local variables cannot be accessed from outside of a function,
    it makes a function an independent piece of code
    */
    int number = 10;
    if (number > 0)
    {
        bool flag = 1;
    }
    // if we try to access flag:
    //  cout << flag;
    // we get an error
    /*
    to solve this issue we can define flag outside the if statement
    
    bool flag;
    if(number >0)
    {
        flag = 1;
    }
    cout << flag;

    
    */
    return 0;
}