/*
Arithmetic Operators

Addition (+)
- adds 2 numbers together

Subtraction (-)
- subtracts one number from another

Multiplication (*)
- multiplies 2 numbers

Division (/)
- divides one number by another

Modulus (%)
- calculates the remainder of an integer division

Increment (++)
- increments the value of a variable by 1
- x++ returns the value first and then increments it
- ++x incrments the value before returning it

Decrement (--)
- decrements the value of a variable by 1
- x-- returns the value first and then decrements it
- --x decrements the value first and then returns it
*/

#include <iostream>

int main(){
    
    int x = 3;
    int y = --x; // y = 2, x =2
    std::cout << "x = " << x << ", y = " << y << std::endl;

    int a = 5;
    int b = a++; // a = 6, b = 5
    std::cout << "a = " << a << ", b = " << b << std::endl;

    return 0;
}