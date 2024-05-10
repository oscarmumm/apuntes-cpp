#include <iostream>
using namespace std;

/*
Before, the return tpe of the function was void. It means
the function didn't retur any value.
Now, the return type is int. Meaning the function returns an int value*/
int add_numbers(int num1, int num2)
{
    int sum;
    sum = num1 + num2;
    return sum;
}

int main()
{
    int result;
    result = add_numbers(6, 8);
    cout << "Result: " << result;
    return 0;
}
/*
The main benefit of using a function is code reusability.
Our code is easier to understand and mantain
*/