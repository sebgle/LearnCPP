/*

Exception Handling
    - a mechanism to handle errors, anomalies, or unexpected events that can occur during the runtime execution of a program 
    - allows the program to continue running or exit gracefully when encountering errors instead of crashing abruptly

    keywords:
        'try': defines a block of code that should be monitored for exceptions
        'catch': specifies the type of exception to be caught and the block of code that shall be executed when that exception occurs
        'throw': throws an exception that will be caught and handled by the appropriate catch block
        'noexcept': specifies a function that doesn't throw exceptions or terminates the program if an exception is thrown within its scope

 */

#include <iostream>
#include <stdexcept>

int divide(int a, int b){
    if(b == 0){
        throw std::runtime_error("Division by zero!");
    }
    return a / b;
}

int main(){

    int num1, num2;
    std::cout << "Input two numbers for division:" << std::endl;
    std::cin >> num1 >> num2;

    try{
        std::cout << "Result = " << divide(num1, num2) << std::endl;
    } catch(std::exception& e){
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

/*
Console output:

Input two numbers for division:
10
0
Result = Error: Division by zero!

Input two numbers for division:
10
5
Result = 2

*/