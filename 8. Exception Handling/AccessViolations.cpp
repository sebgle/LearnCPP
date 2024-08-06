/*

Access Violations
    - a specific type of error that occurs when a program attempts to access an illegal memory location
    
    common causes:

        - dereferencing a null or invalid pointer
            ex:
            int* ptr = nullptr;
            int x = *ptr;  <-- access violation: trying to access nullptrs content

        - accessing an array outside of bounds
            ex:
            int arr[5] = {1,2,3,4,5};
            int y = arr[5]; <-- access violation: index 5 is out of bounds

        - reading or writing to memory freed by the user or the OS
            ex:
            int* p2 = new int[100]; <-- dynamically allocates an array of 100 integers on the heap, p2 points to it
            delete[] p2; <-- deallocates the memory for the array which p2 pointed to
            p2[3] = 42;  <-- access violation: trying to write to memory that has been released

*/