/*

Dynamic Cast
    - used specifically for polymorphism
    - safely converts pointers and references of a base class to its derived class 
    - checks validity of conversion during runtime
    - if conversion is invalid, returns a nullptr instead of undefined behavior
    - can prevent crashes and errors when using polymorphism

*/

#include <iostream>

class BaseClass {
   public:
    virtual void display() {
        std::cout << "BaseClass" << std::endl;
    }
};

class DerivedClass : public BaseClass {
   public:
    void display() {
        std::cout << "DerivedClass" << std::endl;
    }
};

int main() {
    BaseClass *basePtr = new DerivedClass();  // Upcasting
    DerivedClass *derivedPtr;

    derivedPtr = dynamic_cast<DerivedClass *>(basePtr);  // Downcasting
    if (derivedPtr) {
        derivedPtr->display();  // Output: DerivedClass
    } else {
        std::cout << "Invalid type conversion.";
    }

    delete basePtr;
    return 0;
}