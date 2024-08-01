/*
Run-Time Type Identification (RTTI)
    - a feature in C++ that allows you to obtain the type information of an object during program execution
    - useful when using dynamic typing

2 mechanisms for RTTI in C++:

1. typeid operator
    - returns a reference to an object of type std::type_info which contains information about the type of the object
    - to use typeid, the header file <typeinfo> must be included
*/

#include <iostream>
#include <typeinfo>

class Base { virtual void dummy() {} };    //creating a class (Base) with a function (dummy)
class Derived : public Base { /* ... */ }; //creating a class (Derived) which inherits from Base

int main1() {
    Base* base_ptr = new Derived; //creates a pointer to an object of type Base, 

    // Using typeid to get the type of the object
    std::cout << "Type: " << typeid(*base_ptr).name() << '\n';

    delete base_ptr;
    return 0;
}

/*
2. dynamic_cast operator
    - performs a run-time type check and safely downcasts a base pointer or reference to a derived pointer or reference
    - returns null or throws bad_cast exception when casting fails
*/

class Base1 { virtual void dummy() {} };
class Derived1 : public Base1 { /* ... */ };
class Derived2 : public Base1 { /* ... */ };

int main() {
    Base1* base_ptr = new Derived1;

    // Using dynamic_cast to safely downcast the pointer
    Derived1* derived1_ptr = dynamic_cast<Derived1*>(base_ptr);
    if (derived1_ptr) {
        std::cout << "Downcast to Derived1 successful\n";
    }
    else {
        std::cout << "Downcast to Derived1 failed\n";
    }

    Derived2* derived2_ptr = dynamic_cast<Derived2*>(base_ptr);
    if (derived2_ptr) {
        std::cout << "Downcast to Derived2 successful\n";
    }
    else {
        std::cout << "Downcast to Derived2 failed\n";
    }

    delete base_ptr;
    return 0;
}