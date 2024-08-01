/*

Weak Pointers ( std::weak_ptr )
    - adds a level of indirection and safety to a raw pointer
    - mainly used to break reference cycles in cases where 2 objects have shared pointers to each other 
    - or when you need a non-owning reference to an object managed by a shared_ptr

    - does not increase reference count
    - does not prevent object from being deleted

    - to use weak ptr u must convert it to a shared ptr using lock() 
    - if success, object's reference count is incremented and u can use the returned shared_ptr to access the object

    format: 
        std::weak_ptr<TypeofObject> ptr;

    initialized from a shared_ptr:
        std::shared_ptr<T> sharedPtr = std::make_shared<T>();
        std::weak_ptr<T> weakPtr = sharedPtr;  // weakPtr now references the object managed by sharedPtr

*/

#include <iostream>
#include <memory>

class MyClass {
public:
    void DoSomething() {
        std::cout << "Doing something...\n";
    }
};

int main() {
    
    std::weak_ptr<MyClass> weak;

    {
        std::shared_ptr<MyClass> shared = std::make_shared<MyClass>();
        weak = shared;

        if(auto sharedFromWeak = weak.lock()) {
            sharedFromWeak->DoSomething(); // Safely use the object
            std::cout << "Shared uses count: " << sharedFromWeak.use_count() << '\n'; // 2
        }
    }

    // shared goes out of scope and the MyClass object is destroyed

    if(auto sharedFromWeak = weak.lock()) {
        // This block will not be executed because the object is destroyed
    }
    else {
        std::cout << "Object has been destroyed\n";
    }

    return 0;
}