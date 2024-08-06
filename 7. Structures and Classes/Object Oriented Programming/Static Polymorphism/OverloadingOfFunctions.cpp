/*

Function overloading
    - a type of static polymorphism
    - multiple functions with the same name but different sets of parameters are defined in the same scope
    - allows you to use the same function name with multiple tasks 

*/

#include <iostream>

void print(int num) {
    std::cout << "Printing int: " << num << std::endl;
}

void print(double num) {
    std::cout << "Printing double: " << num << std::endl;
}

void print(char const *str) {
    std::cout << "Printing string: " << str << std::endl;
}

int main() {
    print(5);
    print(3.14);
    print("Hello, world!");

    return 0;
}

/*
Console output:

Printing int: 5
Printing double: 3.14
Printing string: Hello, world!

*/