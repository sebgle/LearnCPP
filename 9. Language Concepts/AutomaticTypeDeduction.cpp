/*

auto (Automatic Type Deduction)
    - 'auto' keyword deduces the type of variable from the type of its initializer expresssion at compile time
    - useful when dealing with complex types or when the type of variable is hard to predict
    - In C++14, you can also use auto with function return types to let the compiler automatically deduce the return type based on the returned expression:
*/

#include <iostream>
#include <vector>

//function
auto add(int x, int y) {
    return x + y; // The compiler deduces the return type as 'int'
}

int main() {
    // Traditional way of declaring a variable:
    int myInt = 5;

    // Using auto for type deduction:
    auto myAutoInt = 5; // Automatically deduces the type as 'int'

    // Example with more complex types:
    std::vector<int> myVector = {1, 2, 3, 4, 5};

    // Without auto, iterating the vector would look like this:
    for (std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it) {
        std::cout << *it << std::endl;
    }

    // With auto, the iterator declaration becomes simpler:
    for (auto it = myVector.begin(); it != myVector.end(); ++it) {
        std::cout << *it << std::endl;
    }
}