// #include is used to import external files to our program
// here we are including the iostream file to perform input/output operations
#include <iostream>

//the main function is the entry point of the program
int main()
{
    // std::cout prints the text inside double quotes
    std::cout << "Hello World!" << "\n";
    // there are two things needed to create a variable: name and type, for example:
    // int age;
    // you can assign values to variables using the = operator
    // also you can assign value to a variable during its declaration. int age = 18;
    int age = 18;
    std::cout << "age (before): " << age << "\n";
    // we can change the value later
    age = 25;
    std::cout << "age (after) :" << age << std::endl;
    // we can use "\n" or std::endl to set the end of the line
    // you can declarate multiple variables of the same type in one line
    int num1, num2, num3;

    // rules for naming variables. only letters, numers or underscore.
    // cannot start for a number. cannot be keywords.
    // always try to give it a meaningful name.

    // Data types
    int user_id = 123; // 4 bytes
    double number1 = 45.67; // 8 bytes
    float number2 = 45.67f; // 4 bytes
    // unless you have an especific requirement, always use double for decimal numbers
    // double can also be used to store exponential numbers
    double factor = 22.44e6;
    char letter = 'g'; // 1 byte
    // we use single quotations to represent a character
    bool result1 = true; // 1 byte
    bool result2 = false;
    // we can use 0 and 1 to represent false and tru values for boolean variables

    // we can assign one variable to another. for example:
    num1 = 50, num2 = 100;
    std::cout << "Num1: " << num1 << " Num2: " << num2 << "\n";
    num1 = num2;
    std::cout << "Num1: " << num1 << " Num2: " << num2 << "\n";

    int favorite_number;
    std::cout << "Enter your favorite number: " << std::endl;
    std::cin >> favorite_number;
    std::cout << "Your favorite number is: " << favorite_number << std::endl;

    // Aritmetic operators:
    // + add, - substraction, * multiplication, / quotient, % remainder
    // "num1 += 1" == "num1 = num1 +1"
    // converting data types
    double sum = num1 + 4.5;
    std::cout << "num1 is now a double data type" << std::endl;
    // another way to convert data types:
    double data2 = (double)num2;
    // when data of a larger size is converted to data of a smaller size (like double to int)
    // there may be a loss of data

    // we can use "using namespace std;" at the top of the program to avoid use "std::" multiple times

    // the main function ends with this statement
    return 0;

}