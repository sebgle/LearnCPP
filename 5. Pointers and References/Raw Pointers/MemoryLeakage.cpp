/*

Memory Leakage
    - when a program allocates memory in the heap but does not release the memory back to the operating system when it is no longer needed 
    - over time this leads to exhaustion of available memory, resulting in low system performance or crashes

    - when you use raw pointers you need to manage the memory allocation and deallocation manually 
    - use 'new' and 'delete'

    ex of memory leak:
        void create_memory_leak() {
            int* ptr = new int[100]; // Allocating memory in the heap for an array of integers
            // Some code...
            // Code to deallocate the memory is missing: delete[] ptr;
        } // ptr goes out of scope, memory block allocated is not deallocated, causing a memory leak.

*/