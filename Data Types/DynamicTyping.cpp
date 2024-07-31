/*
Dynamic Typing

C++ is known as a statically typed language, but also provides some aspects of dynamic typing

2 ways to achieve dynamic typing in C++:

1. void* Pointers
    - void* pointer is a generic pointer that can point to objects of any data type
    - they can be used to store a reference to any type of object w/out knowing the type of the object

2. std::any (C++17)
    - C++17 introduced the std::any class which is a generalized type-safe container for single values of any type


**note** 
both void* pointers and std::any have performance implications due to the additional type checking and casting that take place during runtime. They should be used carefully and only when absolutely necessary.
*/