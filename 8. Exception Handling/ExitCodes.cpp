/*

Exit Codes (aka return / status codes)
    - numeric values that a program returns to the calling environment when it finishes execution
    - used to indicate the success or failure of a program's execution

    Zero (0)
        - standard exit code for successful execution
    Non Zero 
        - standard exit code for errors or other exceptional situations


    ex:

// using return 

#include <iostream>

int main1() {
    // Some code here...

    if (some error condition) {
        std::cout << "An error occurred." << std::endl;
        return 1;
    }

    // More code here...

    if (another error condition) {
        std::cout << "Another error occurred." << std::endl;
        return 2;
    }

    return 0; // Successful execution
}


// using the STD exit() function 

#include <cstdlib>

void some_function() {
    // Some code here...

    if (some error condition) {
        std::cout << "An error occurred." << std::endl;
        std::exit(1);
    }

    // More code here...
}

int main2() {
    some_function();

    // Some other code here...

    return 0; // Successful execution
}

*/


