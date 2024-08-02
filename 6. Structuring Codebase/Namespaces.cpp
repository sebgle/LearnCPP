/*

Namespaces
    - a named scope or container
    - used to organize and enclose a collection of code elements (variables, functions, classes + other namespaces)
    - used to divide and manage the code base


    Syntax:
        namespace identifier {
            //code elements 
        }


    Nesting namespaces:
        namespace outer{
            int x = 10;

            namespace inner{
                int y = 20;
            }
        }


    'using' Keyword:
        - used to import namespaced elements into current scope
        - might lead to name conflicts if multiple namespaces have elements with the same name

*/

#include <iostream>

namespace animals {
    std::string dog = "Rufus";
    std::string cat = "Mew";

    namespace insects { //nested namespace
        std::string butterfly = "Monarch"; 
    }
}

int main(){

    using animals::dog; // using a single element from a namespace
    using animals::insects::butterfly; //using a single element from a nested namespace

    std::cout << "My dog's name is: " << dog << std::endl; //prints: My dog's name is: Rufus
    std::cout << "My butterfly is a: " << butterfly << std::endl; //prints: My butterfly is a: Monarch


    using namespace animals; // using an entire namespace

    std::cout << "My dog's name is: " << dog << " and my cat's name is: " << cat << std::endl; 
    //prints: My dog's name is: Rufus and my cat's name is: Mew
    std::cout << "My butterfly is a: " << insects::butterfly << "!" << std::endl; //using a nested namespace
    // prints: My butterfly is a: Monarch!

    return 0;
}