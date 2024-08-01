/*

Raw Pointers and 'new' / 'delete' operators
    - raw pointers are low-level constructs that hold a memory address
    - can be used for manually allocating memory
    - creating dynamic arrays
    - passing values efficiently


    'new' operator
        - used to allocate memory on the heap
        - remains available until you explicitly deallocate it using 'delete' operator

        ex: int* ptr = new int;  <---- dynamically allocates an int on the heap
            *ptr = 42;           <---- assigns the value 42 to the allocated int

    
    'delete' operator
        - used to deallocate memory that has been allocated using 'new' operator
        - failing to deallocate can lead to memory leaks

        ex: delete ptr;


    'new[]' and 'delete[]' operators
        - used for allocating and deallocating memory for an array of objects

        ex:
            int n = 10;
            int* arr = new int[n];  <--- dynamically allocates an array of 10 integers on the heap

            //set some values in array
            for (int i = 0; i < n; i++){
                arr[i] = i;
            }

            delete[] arr;           <--- deallocates the memory assigned to the array

*/

#include <iostream>

int main(){

    int num = 25;
    int* array = new int[num]; //dynamically allocates an array of 25 integers on the heap

    for(int i=num; i>0; i--){
        array[i] = i;
        std::cout << array[i] << ", ";
    }

    std::cout << "Deleting the array now." << std::endl;
    delete[] array; //deallocates the array from the heap

    return 0;
}