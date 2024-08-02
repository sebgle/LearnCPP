/*

Scope in C++
    - refers to the visibility and accessibility of variables, functions, and classes + other identifiers
    - determines the lifetime and extent of these identifiers

    Types of scope:

        1. Global scope
            - identifiers declared outside of any function or class 
            - can be accessed from any part of the program (unless hidden by a local identifier w/same name)
            - lifetime = the entire duration of the program

        2. Local scope
            - identifiers declared within a function or block 
            - can be accessed only within the function or block they were declared in
            - lifetime = duration of function/block execution

        3. Namespace scope
            - a named scope that groups related identifiers together
            - can be accessed using the namespace name and the scope resolution operator ( :: )
            ex: Mynamespace::namespaceVar
        
        4. Class scope
            - identifiers declared within a class
            - can be accessed using the class name and the scope resolution operator ( :: )
            - for non-static members access using an object of the class and dot ( . ) or arrow ( -> ) operators
            

*/