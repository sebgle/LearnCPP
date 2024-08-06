/*

Static Polymorphism (aka compile-time polymorphism)
    - a type of polymorphism that resolves the types and method calls at compile time
    - commonly achieved through the use of function overloading and templates

    Function Overloading   
        - a way to create multiple functions with the same name but different parameter lists 
        - the compiler determines the correct function to call based on the type and number of arguments used when the function is called

    Templates
        - allows you to create generic functions or classes
        - code for specific types is generated at compile time 
        - avoids the overhead of runtime polymorphism
        - main technique to achieve static polymorphism in C++

*/

#include <iostream>

//function overloading
void print(int num){
    std::cout << "Printing integer: " << num << std::endl;
}

void print(std::string str){
    std::cout << "Printing string: " << str << std::endl;
}

void print(double dec){
    std::cout << "Printing double: " << dec << std::endl;
}

int main1(){

    std::cout << "testing function overloading" << std::endl;
    print(42);
    print("c++");
    print(3.14);

    return 0;
}

/*
Console output:
Printing integer: 42
Printing string: c++
Printing double: 3.14
*/



//template
template<typename T>
void print(const T value){
    std::cout << "Printing value: " << value << std::endl;
}

int main(){

    std::cout << "\ntesting templates" << std::endl;
    print(3.14159265);
    print(42);
    print("i <3 c++");

    return 0;
}

/*
Console output:

testing templates
Printing value: 3.14159
Printing value: 42
Printing value: i <3 c++

*/