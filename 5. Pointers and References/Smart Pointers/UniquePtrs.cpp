/*

Unique Pointer ( std::unique_ptr )
    - a smart pointer provided by the C++ standard library
    - a template class that is used for managing single objects or arrays  

    - works on the concept of "exclusive ownership"
        - only one unique_ptr is allowed to own an object at a time
        - ownership can be transferred or removed, but not shared or copied
    
    - helps prevent things like dangling pointers, memory leaks, and eliminates the need for manual memory management

    - when the unique_ptr goes out of scope, it automatically deletes the object it owns

    format: 
        std::unique_ptr<Type, Deleter(optional)> ptr(new int(5));
            - initialization optional (new int(5))
            - can also use: auto ptr = std::make_unique<int> (5);


    When to Use:
        When you need sole ownership of a resource.
        When the resource should be destroyed as soon as the owning pointer goes out of scope or is explicitly reset.
        When you want to avoid the overhead of reference counting.
*/

#include <iostream>
#include <memory>

struct MyDeleter {
    void operator()(int* ptr) {
        std::cout << "Custom Deleter: Deleting pointer" << std::endl;
        delete ptr;
    }
};

int main(){

//creating a unique pointer
    std::unique_ptr <int> p1 (new int(5)); //intialize with a pointer to a new integer 
    std::unique_ptr <int> p2 = std::make_unique <int> (10); // the preferred method for C++14 onwards

    std::cout << *p1 << ", " << *p2 << std::endl;


//transferring ownership
    std::unique_ptr <int> p3 = std::move(p1); //ownership is transferred from p1 to p3
                                              // p1 becomes a nullptr, pointing to nothing

    if (p1) {
        std::cout << "p1 owns the object" << std::endl;
    } else if (p3) {
        std::cout << "p3 owns the object" << std::endl;
    }

//custom deleters
std::unique_ptr<int, MyDeleter> p4(new int(5), MyDeleter());

    return 0;
}