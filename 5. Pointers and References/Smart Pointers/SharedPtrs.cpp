/*

Shared Pointers ( std::shared_ptr )
    - a type of smart pointer that allows multiple pointers to share ownership of a dynamically allocated object
    - the object will be automatically destroyed only when the last shared_ptr is destroyed

    - when using a shared_ptr, the reference counter is automatically incremented every time a new pointer is created
    - decremented when one goes out of scope
    - when counter = 0, system will clean up the memory

    format:
        std::shared_ptr<TypeofObject> ptr;
            or
        auto ptr = std::make_shared<TypeofObject>(args...);


    When to Use:
        When you need multiple parts of your program to share ownership of a resource.
        When the resource should only be destroyed when the last owner goes out of scope.
        In scenarios involving complex ownership graphs, such as nodes in a graph or elements in a GUI.
*/

#include <iostream>
#include <memory>

class MyClass {
public:
    MyClass() { std::cout << "Constructor is called." << std::endl; }
    ~MyClass() { std::cout << "Destructor is called." << std::endl; }
};

int main() {
    // create a shared pointer to manage the MyClass object
    std::shared_ptr<MyClass> ptr1(new MyClass());
    
    {
        // create another shared pointer and initialize it with the previously created pointer
        std::shared_ptr <MyClass> ptr2 = ptr1;

        std::cout << "Inside the inner scope." << std::endl;
        // both pointers share the same object, and the reference counter has been increased to 2
    }

    std::cout << "Outside the inner scope." << std::endl;
    // leaving the inner scope will destroy ptr2, and the reference counter is decremented to 1
    
    // the main function returns, ptr1 goes out of scope, and the reference counter becomes 0
    // this causes the MyClass object to be deleted and the destructor is called

    return 0;
}