#include <iostream>
using namespace std;

int main()
{
    // a comparison operator compares two operands and determines whether the comparision is true or false
    // 1 = true, 0 = false
    int comparison = 5 > 1;
    cout << "comparison: " << comparison << endl;
    /*
    Comparison operators
    >  ... greater than
    <  ... less than
    == ... equal to
    != ... not equal to
    >= ... greater than or equal to
    <= ... less than or equal to

    Logical operators
    && ... and
    || ... or
    !  ... not
    */
    int user_age = 18, user_salary = 1000000, result;
    result = (user_age >= 18) && (user_salary >= 500000);
    cout << "result: " << result << endl;
    // if - else statements
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;
    if (age == 18)
    {
        cout << "You are already older" << endl;
    }
    else if (age < 18)
    {
        cout << "You are too young" << endl;
    }
    else
    {
        cout << "You are very old" << endl;
    }
    cout << "Code outside the statement" << endl;

    return 0;
}