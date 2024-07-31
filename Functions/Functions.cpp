/* 
Functions
- groups of statements that perform a specific task, organized as a separate unit in a program
- help break the code into smaller, manageable, and reusable blocks

2 types of functions in C++:
-------------------------------
1. Standard Library Functions
- pre defined functions available in the C++ standard library
- such as sort(), strlen(), sqrt()

2. User Defined Functions
- functions created by the programmer to perform a task
- defined outside of any other function

general format:

return_type function_name(parameter list){
    //function body
}

- return type: data type of the output produced by function, it can be void if the function doesn't return a value
- function name: name given to function
- parameter list: list of input parameters/arguments that are needed to perform the task 

*/

#include <iostream>

int add(int a, int b){
    return a + b;
}

int main1(){

    int result = add(3, 4);

    std::cout << "The answer is: " << result << std::endl;

    return 0;
}

/*
Function prototypes
- you may wanna use a function before defining it
- to do this u gotta declare a function prototype at the beginning of your code

- a function prototype is a declaration of the function without its body, it informs the compiler about the functions name, return type, and parameters
*/

int multiply(int a, int b); //function prototype

int main(){

    int result = multiply(3, 4);

    std::cout << "The answer is: " << result << std::endl;

    return 0;
}

int multiply(int a, int b){ //function definition
    return a * b;
}