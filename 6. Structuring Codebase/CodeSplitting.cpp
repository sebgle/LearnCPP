/*

Code Splitting
    - the process of breaking down a large code base into smaller, more manageable files or modules
    - helps improve organization, maintainability, and readibility of code


    Header Files (.h or .hpp)
        - responsible for declaring classes, functions, and variables that are needed by multiple source files
        - act as an interface between different parts of code
        - makes it easier to manage dependencies and reduce the chance of duplicated code

    Source Files (.cpp)
        - responsible for implementing the actual functionality defined in corresponding header files
        - include the header files as needed and provide the function and class method definitions

    Separate Compilation
        - each source file can be compiled independently into an object file
        - these object files can then be linked together to form the final executable
        - provides faster build times when making changes to a single source file 

*/