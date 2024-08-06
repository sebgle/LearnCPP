/*

Exceptions
    - method used to tackle runtime errors so that normal flow of the program can be maintained
    - 'try' , 'catch' , 'throw'

    
    try{...}
        - in the 'try' block you write code that could possibly generate an exception
        - if an exception occurs the control is passed to the relevant 'catch' block


    catch(...){...}
        - follows the try block and is responsible for handling the exceptions thrown by the try block
        - can be multiple catch blocks to handle different types of exceptions


    throw ...;
        - in case an error occurs within the try block use 'throw' to generate an exception of a specific type
        - this will then be caught and handled by the corresponding 'catch' block  

 */