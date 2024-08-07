/*

Reinterpret Cast
    - allows you to change the type of a pointer or an integer without altering the representation of the data
    - you should be cautious about dereferencing the converted pointers
    - the behavior can be unpredictable, and it can lead to issues, such as accessing memory regions that are not intended to be accessed.

*/

#include <iostream>

int main() {
    int num = 42;
    int *num_ptr = &num;

    // Disguise the integer pointer as a char pointer
    char *char_ptr = reinterpret_cast<char *>(num_ptr);

    for (size_t i = 0; i < sizeof(int); ++i) {
        // Print the individual bytes of the integer as characters
        std::cout << "Byte " << i << ": " << char_ptr[i] << std::endl;
    }

    return 0;
}