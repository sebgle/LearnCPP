/*

The Rule of 0, 5, 3
    - a set of guidelines for managing object resources in C++ (structs and classes)


    Rule of Zero
        - if a class or structure does not explicitly manage resources
        - it should not define any of the special member functions 
        - the compiler will automatically generate these functions 

        ex: struct MyResource {
                std::string name;
                int value;
            };

            - In this example, MyResource is a simple structure that does not manage any resources, so it does not define any special member functions. The compiler will generate them automatically, and the behavior will be correct.

    
    Rule of Three
        - a class or structure that manages resources should define the following special member functions:
            1. Destructor
            2. Copy constructor
            3. Copy assignment operator
        - These functions are necessary for proper resource management, such as releasing memory or correctly handling deep copies.

        ex: class MyResource {
            public:
                // Constructor and destructor
                MyResource() : data(new int[100]) {} 
                ~MyResource() { delete[] data; } 

                // Copy constructor
                MyResource(const MyResource& other) : data(new int[100]) {
                    std::copy(other.data, other.data + 100, data);
                }

                // Copy assignment operator
                MyResource& operator=(const MyResource& other) {
                    if (&other == this) { return *this; }
                    std::copy(other.data, other.data + 100, data);
                    return *this;
                }

            private:
                int* data;
            };


    Rule of Five         
        - extends rule of three to include 2 additional special member functions
            1. Move constructor
                - a special constructor that transfers ownership of resources from one object (the source) to another (the destination) without creating a copy. This is particularly useful for managing resources such as dynamic memory, file handles, or network sockets, as it can significantly improve performance by avoiding unnecessary deep copies.
            2. Move assignment operator

        ex: class MyResource {
            public:
                // Constructors and destructor
                MyResource() : data(new int[100]) {}
                ~MyResource() { delete[] data; }

                // Copy constructor
                MyResource(const MyResource& other) : data(new int[100]) {
                    std::copy(other.data, other.data + 100, data);
                }

                // Copy assignment operator
                MyResource& operator=(const MyResource& other) {
                    if (&other == this) { return *this; }
                    std::copy(other.data, other.data + 100, data);
                    return *this;
                }

                // Move constructor
                MyResource(MyResource&& other) noexcept : data(other.data) {
                    other.data = nullptr;
                }

                // Move assignment operator
                MyResource& operator=(MyResource&& other) noexcept {
                    if (&other == this) { return *this; }
                    delete[] data;
                    data = other.data;
                    other.data = nullptr;
                    return *this;
                }

            private:
                int* data;
            };


*/

#include <iostream>

class Object{
    public:
        //constructor
        Object(){ 
            std::cout << "allocating memory for a new integer" << std::endl;
            data = new int(0); //dynamically allocate an integer and initialize it to 0, data points to the int
        }

        //destructor
        ~Object(){
            std::cout << "deallocating memory for this object's integer" << std::endl;
            delete data; //dynamically deallocates the memory block that data points to
        }

        //copy constructor
        Object(const Object& other){ //pass in a reference to the object that is being copied
            data = new int(*other.data); //set the data of the new object to equal the value of the other data
        }

        //copy assignment operator
        Object& operator=(const Object& other){
            if(this != &other){ //check if we are attempting to copy the same object
                *data = *other.data;
            }
            return *this; //return a reference to the current object
        }

        //move constructor
        Object(Object&& other) noexcept : data(other.data){ 
            other.data = nullptr;
        }

        //move assignment operator 
        Object& operator=(Object&& other) noexcept{
            if(this != &other){
                delete data; //release current resource
                data = other.data; //gain ownership of resource
                other.data = nullptr; //leave the other object in a safe state
            }
            return *this;
        }

        //getter
        void getData(){
            std::cout << "Data: " << *data << std::endl;
        }

        void getPtr(){
            std::cout << "Memory Address of Data: " << data << std::endl;
        }

        //setters
        void setData(int val){
            *data = val;
        }

    private: 
        int* data;
};



#include <iostream>

int main(){

    Object obj1;
    
    std::cout << "test of get/set" << std::endl;
    obj1.getData();
    obj1.setData(42);
    obj1.getData();

    std::cout << "\ntest of copy constructor" << std::endl;
    Object obj2 = obj1;
    obj1.setData(21);
    obj1.getData();
    obj2.getData();

    std::cout << "\ntest of copy assignment operator" << std::endl;
    Object obj3; 
    obj3 = obj2;
    obj2.setData(11);
    obj2.getData();
    obj3.getData();

    std::cout << "\ntest of move constructor" << std::endl;
    obj1.getPtr();
    obj1.getData();
    Object obj4(std::move(obj1));
    obj4.getPtr();
    obj4.getData();

    std::cout << "\ntest of move assignment operator" << std::endl;
    Object obj5;
    obj5.getPtr();
    obj5.getData();
    obj4.getPtr();
    obj4.getData();
    obj5 = std::move(obj4);
    std::cout << "after move" << std::endl;
    obj4.getPtr();
    obj5.getPtr();
    obj5.getData();

    return 0;
}

/*
Console output:

allocating memory for a new integer
test of get/set
Data: 0
Data: 42

test of copy constructor
Data: 21
Data: 42

test of copy assignment operator
allocating memory for a new integer
Data: 11
Data: 42

test of move constructor
Memory Address of Data: 0x65a510
Data: 21
Memory Address of Data: 0x65a510
Data: 21

test of move assignment operator
allocating memory for a new integer
Memory Address of Data: 0x660660
Data: 0
Memory Address of Data: 0x65a510
Data: 21
after move
Memory Address of Data: 0
Memory Address of Data: 0x65a510
Data: 21
deallocating memory for this object's integer
deallocating memory for this object's integer
deallocating memory for this object's integer
deallocating memory for this object's integer
deallocating memory for this object's integer
*/