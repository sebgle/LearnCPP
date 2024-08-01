/*

Lifetime of Objects
    - refers to the time during which an object exists 
    
    
    Static Storage Duration 
        - exist for the entire run of the program
        - allocated at the beginning of the program's run and deallocated when the program terminates
        - include: global variables, static data members, and static local variables

    Thread Storage Duration
        - exist for the lifetime of the thread they belong to
        - created when a thread starts and destroyed when thread exits
        - thread storage duration can be specified using 'thread_local' keyword

        ex: thread_local int number;
    
    Automatic Storage Duration
        - created at the point of definition and destroyed when the scope in which they are declared is exited
        - also known as 'local' or 'stack' objects
        - examples include: function parameters and local, non-static variables

    Dynamic Storage Duration
        - created at runtime, using memory allocation function such as 'new' or 'malloc'
        - lifetime must be managed manually 
        - programmer must destroy objects using 'delete' or 'free' to avoid memory leaks

        ex: int* ptr = new int;     <------ dynamic storage duration
            delete ptr;

*/