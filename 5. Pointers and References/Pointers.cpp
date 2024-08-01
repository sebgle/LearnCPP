/*
Pointers
    - a variable that stores the memory address of another variable (or function)
    - points to the location of the variable in memory
    - allows you to access or modify the value indirectly 

    Declaring pointers:
        dataType *pointerName;

    Initializing pointers:
        int num = 10;
        int *ptr = &num; //pointer 'ptr' now points to the memory address of 'num'

    Accessing value using a pointer:
        int value = *ptr;  //value now contains the value of the variable that 'ptr' points to

    Function pointer:
        - points to a function
        - syntax: return_type (*FuncPtr) (parameter type, ....);  
        int add(int a, int b){
            return a + b;
        }
        int main(){
            int (*funcptr) (int, int) = add; // pointer 'funcptr' now points to the function 'add'
            funcptr(4, 5); //returns 9
        }
*/

#include <iostream>


int divide(int a, int b){
    return a / b;
}

int main(){

    int variable = 29;
    int *ptr = &variable;
    std::cout << "The value in the variable 'variable' is: " << *ptr << std::endl;
    std::cout << "The memory address for the variable 'variable' is: " << ptr << std::endl;

    int (*dividePtr) (int, int) = divide;
    int result = dividePtr(6,3);
    std::cout << "6 divided by 3 = " << result << std::endl;

    return 0;
}