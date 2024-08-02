/*

Forward Declaration
    - a way of declaring a symbol (class, function, or variable) before defining it in code
    - helps the compiler understand the type, size, and existence of the symbol
    - particularly useful with cyclic dependencies or to reduce compilation time 

    
    Class forward declaration
        - to use a class type before it's defined, declare the class without defining its members
        ex: class ClassA;  <--- forward declaration
        - You can then use pointers or references to the class in your code before defining the class itself
        - However, if you try to make an object of ClassA or call its member functions without defining the class, you will get a compilation error.

    
    Function forward declaration
        - used to declare a function without defining it
        ex: int add(int a, int b);


    Enum and Typedef forward declaration
        - it is not possible to forward declare because they don't have separate declaration and definition stages

*/