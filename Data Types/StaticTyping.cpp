/*
Static Typing
    - the data type of a variable is determined at compile time (before program is executed)
    -  the compiler ensures that the operations performed with the variable are compatible with its type
    - if there is a mismatch , the compiler will adjust the data type of variable to match another provided it’s feasible, this is known as type conversion
    - else, invalid type conversion error will be raised during compilation
*/

#include <iostream>

int main() {
    int num = 65;        // 'num' is statically typed as an integer
    double pi = 3.14159; // 'pi' is statically typed as a double
    char c = 'c';        // 'c' is statically typed as a char

    c = num;    // This asssigment would convert num's value to ASCII equivalent character
    num = pi; // This assignment would convert pi's value from double type to int type
    
    std::cout << "The value of num is: " << num << std::endl;
    std::cout << "The value of pi is: " << pi << std::endl;
    std::cout << "The value of c is: "<< c << std::endl;
    return 0;
}