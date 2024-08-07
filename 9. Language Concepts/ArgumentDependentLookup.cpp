/*

Argument Dependent Lookup (ADL)
    - a mechanism that allows the compiler to search for the appropriate function to call based on the types of arguments provided
    - helpful with function overloading or operators in a namespace
    - when writing templates, you might not know which specific types will be used with your template
        - ADL helps ensure that the correct function is found and used
        - even if it is defined in a different namespace.

*/

#include <iostream>

namespace MyNamespace {
    struct MyType {};

    void print(const MyType&) {
        std::cout << "MyType object from MyNamespace" << std::endl;
    }
}

int main() {
    MyNamespace::MyType obj;
    print(obj); // ADL will find MyNamespace::print
    return 0;
}
