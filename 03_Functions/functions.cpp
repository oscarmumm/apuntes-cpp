#include <iostream>
using namespace std;
/*
A function is a block of code that performs a especific task
Dividing a complex problem intto smaller chunks makes
our program easy to understand and reuse
Syntax:
return_type function_name(){
    function_body
}
*/

// function definition
void greet()
{
    cout << "Hello! How are you?";
}

int main()
{
    // calling the function
    greet();
    return 0;
}