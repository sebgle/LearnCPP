/*
References
    - an alias for an existing variable
    - a different name for the same memory location
    - cannot be null, unlike pointers
    - once a reference is initialized, it cannot be changed to another variable

    - declared using & (ampersand) symbol

    usage:
        - use the reference just like the original variable
        - when you change the value of the reference, the value of the original variable also changes
        - can use references as function parameters to create an alias for an argument
            - commonly done when you need to modify the original variable 
            - or when passing an object of considerable size to avoid the cost of copying
    
    format:
        dataType &referenceName = existingVariable;

    Example:
        int num = 10;
        int &ref = num; // 'ref' is now an alias of 'num'

    -modifying the value of 'ref' will also modify the value of 'num' because they share the same memory location

    - generally used when you want to pass a variable by reference in function arguments
    - don't need to dereference to access the information inside the variable
*/

#include <iostream>

void swap(int& a, int& b);

int main(){
    int number = 25;
    int &refNumber = number;

    std::cout << refNumber << std::endl; //prints 25
    
    refNumber = 34;
    std::cout << refNumber << std::endl; //prints 34
    std::cout << number << std::endl;  // also prints 34, because refNumber is a reference to number

    std::cout << &refNumber << " is the same as " << &number << std::endl; //both have the same memory address


    //function references as arguments
    int x = 5, y = 10;
    std::cout << "Before Swap: x = " << x << " y = " << y << std::endl; // Outputs 5 10
   
    swap(x, y); // passes references to x and y, to directly access the variables within the function
    std::cout << "After Swap: x = " << x << " y = " << y << std::endl;  // Outputs 10 5

    return 0;    
}

void swap(int& a, int& b) { //function
    int temp = a;
    a = b;
    b = temp;
}