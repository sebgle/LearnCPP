/*
Memory Model
    - defines how the program stores and accesses data in computer memory
    - consists of different segments:
        - Stack
        - Heap
        - Data
        - Code
    - each segment is used to store different types of data and has specific characteristics


    Stack Memory
        - used for automatic storage duration variables
            - local variables and function call data
        - managed by the compiler 
        - allocation and deallocation done automatically
        - also called a LIFO (last in first out) data structure
            - most recent data allocated is the first to be deallocated

        ex: void function(){
                int x = 10;    <-----  x is stored in the stack memory
            }


    Heap Memory
        - used for dynamic storage duration variables 
            - such as objects using the 'new' keyword  
        - programmer has control over allocation and deallocation of heap memory 
            - 'new' and 'delete' operators
        - larger pool of memory than the stack, but slower access time

        ex: void function(){
                int* p = new int;   <---- dynamically allocated int in heap memory
                *p = 10;         
                delete p;           <---- deallocate memory
            }

    
    Data Segment
        two parts:
            1. initialized data segment
                - stores global, static, and constant variables with initial values
            2. uninitialized data segment
                - stores uninitialized global and static variables

        ex:
            Initialized data segment
                int globalVar = 10; // global variables
                static int staticVar = 10; // static local variables
                const int constVar = 10; // constant variables with value

            Uninitialized data segment
                int globalVar; // uninitialized global variables
                    

    Code Segment
        - also known as Text segment
        - stores executable code (machine code)
        - located in ROM (read only memory) to prevent accidental modification
*/