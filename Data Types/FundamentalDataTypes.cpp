/*
Fundamental Data types

Integer (int)
    - whole numbers,  positive and negative
    - usually 4 bytes
    - variations of int: short, long, long long

Floating Point (float, double)
    - numbers with a decimal point
    - types: 
        float: provides single-precision floating point numbers ex: 3.14
        double: provides double-precision floating point numbers, consumes more memory than float and is more precise ex: 3.1415926535

Character (char)
    - represents a single character
    - stored using the ASCII value of the symbol
    - typically occupy one byte of memory

Boolean (bool)
    - true or false
    - one byte of memory

----------------------------------------------------------------------

Derived Data Types

Arrays
    - used to store multiple values of the same data type in consecutive memory locations
    ex: int numbers[5] = {1,2,3,4,5};

Pointers
    - used to store the memory address of a variable
    ex: 
    int num = 42;
    int* pNum = &num;

References
    - an alternative way to share memory locations between variables
    ex:
    int num = 42;
    int& numRef = num;

------------------------------------------------------------------------------

User Defined Data types

Structures (struct)
    - used to store different data types under a single variable 
    - accessibility of member variables and methods are public

    ex:
    struct Person{
        std::string name;
        int age;
        float height;
    };

    Person p1 = {"John Doe", 30, 5.8};

Classes (class)
    - similar to structs
    - accessiblity of member data and function are governed by access specifiers
    - by default access to members of a class is private

    ex:
    class Person {
        public: 
            std::string name;
            int age;

            void printInfo(){
                std::cout << "Name: " << name << ", Age: " << age << std::endl;
            };
    };

    Person p1;
    p1.name = "John Doe";
    p1.age = 30;

Unions (union)
    - used to store different data types in the same memory location

    ex:
    union Data {
        int num;
        char letter;
        float decimal;
    };

    Data myData;
    myData.num = 42;
*/