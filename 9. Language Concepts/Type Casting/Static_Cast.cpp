/*

Static Cast
    - performs a compile-time check and gives an error if there is no valid conversion between given types
    - generally safer than c-style casts 

    Syntax:  static_cast<new_type>(expression)

    ex:

    int i = 42;
    float f = static_cast<float>(i); // Converts integer i to float f


    class Base {  ...  };
    class Derived : public Base {  ... };

    Base *bPtr = new Derived;
    Derived *dPtr = static_cast<Derived *>(bPtr); // Converts Base pointer bPtr to Derived pointer dPtr


    enum Color { RED, GREEN, BLUE };
    int value = 1;
    Color color = static_cast<Color>(value); // Converts integer value to corresponding Color enumeration

    
*/