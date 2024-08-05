/*

Diamond Inheritance
    - scenario in multiple inheritance
    - a class is derived from two or more classes, which are derived from a common base class
    - leads to an ambiguous behavior while calling the duplicate members

    solution:
        - virtual inheritance
            - a class that is shared by multiple classes using 'virtual' keyword
            - ensures that only one copy of the base class is inherited in the final derived class

*/

#include <iostream>

class Base {
    public:
        void print(){
            std::cout << "I'm the base" << std::endl;
        }
};

class Derived1 : virtual public Base{
    public:
        void printDerived1(){
            std::cout << "I'm the first derivation of the base" << std::endl;
        }
};

class Derived2 : virtual public Base{
    public:
        void printDerived2(){
            std::cout << "I'm the second derivation of the base" << std::endl;
        }
};

class Derived3 : public Derived1, public Derived2{
    public: 
        void printDerived3(){
            std::cout << "I'm a derivation of Derived1 and Derived2 and Base" << std::endl;
        }
};

int main(){

    Derived3 d3;
    d3.print();
    d3.printDerived1();
    d3.printDerived2();
    d3.printDerived3();

    return 0;
}

/*
Console output:

I'm the base
I'm the first derivation of the base
I'm the second derivation of the base
I'm a derivation of Derived1 and Derived2 and Base

*/