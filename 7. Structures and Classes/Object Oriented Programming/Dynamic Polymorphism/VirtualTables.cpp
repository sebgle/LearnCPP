/*

Virtual Tables
    - when a class contains a virtual function, the compiler creates a virtual table for that class
    - this table contains function pointers to the virtual functions defined in the class
    - each object of that class has a pointer to its virtual table (vptr) which is automatically initialized by the compiler during object construction

*/