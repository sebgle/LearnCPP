/*

Macros
    - preprocessing directives used to perform text substitution
    - defined using the #define directive followed by macro name and value to be substituted
    

    Constant macros
        - used to define symbolic constants for use in code
        - don't use any memory and are replaced by preprocessor before the compilation process

        ex: #define PI 3.14159
            double circumference = 2 * PI * radius;


    Function-like macros
        - take a list of arguments and perform text substitution

        ex: #define SQUARE(x) ((x) * (x))
            int square_of_five = SQUARE(5);


    Conditional compilation
        - macros can be used for conditional compilation using #ifdef, #ifndef, #if, #else, #elif, #endif


        ex:
            #define DEBUG_MODE

            #ifdef DEBUG_MODE
            // Code to be compiled only in debug mode
            #else
            // Code to be compiled only if DEBUG_MODE is not defined
            #endif

*/