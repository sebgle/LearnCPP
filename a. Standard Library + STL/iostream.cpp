/*

<iostream>
    - a header in STL that provides functionality for basic input and output
    
    classes:
        - cin: read from input
        - cout: write output
        - cerr: write standard error output
        - clog: output buffer for log

*/

#include <iostream>

int main(){

    int a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    std::cout << "You entered: " << a << std::endl;

    std::cerr << "An error occurred." << std::endl;
    std::clog << "Logging information." << std::endl;

    return 0;
}