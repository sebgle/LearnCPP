/* 
Lambda functions in C++ are anonymous function objects (functors) that can be defined in-line within your code
- can be written within another function

syntax:
[capture-list](parameters) -> return_type {
    //function body
};

capture list: a list of variables from the surrounding scope that lambda can access
parameters: list of input parameters
return type: type of value the lambda will return
function body: code that defines the operation of the lambda

*/

//example with a capture by reference variable

#include <iostream>

int main(){

    int age = 18;

    auto reassignAge = [&age](int newAge) {
        age = newAge;
        std::cout << "Your new age is: " << age << std::endl;
    };

    reassignAge(19);

    return 0;
}