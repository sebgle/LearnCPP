/*

Iterators
    - help us traverse containers like arrays, lists, and vectors
    - behave similarly to pointers

    
    Input iterator
        - used to read elements in a container only once in a forward direction
    
    Output iterator
        - used to write elements in a container only once in a forward direction

    Forward iterator
        - used for multiple passes over the elements in a container (forwards)

    Reverse iterator
        - used for multiple passes over the elements in a container (backwards)

    Bidirectional iterator
        - move forward/backward in a container

    Random Access iterator
        - forwards, backwards, direct jump

    
    for most cases, you want to start with 'auto' keyword and the container methods (begin() and end())

*/

#include <iostream>
#include <vector>

int main(){

    std::vector<int> nums = {1,2,3,4,5};

    for(auto itr = nums.begin(); itr != nums.end(); ++itr){
        std::cout << *itr << " ";
    }

    return 0;
}