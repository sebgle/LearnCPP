/*
Logical Operators:
- return a boolean value true (1) or false (0)

AND (&&) 
- true if both conditions are true
(expression1 && expression2)

OR (||)
- true if either of the conditions are true
(expression1 || expression2)

NOT (!)
- reverses the result of the condition it is applied on
!(expression)
*/

#include <iostream>

int main(){

    bool isTrue = (1 && 0);
    std::cout << isTrue << std::endl;
    // prints 0

    isTrue = (1 || 0);
    std::cout << isTrue << std::endl;
    // prints 1

    isTrue = !(0);
    std::cout << isTrue << std::endl;
    //prints 1

    return 0;
}