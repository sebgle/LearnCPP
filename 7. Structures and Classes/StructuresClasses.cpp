/*

Structures and Classes
    - user defined data types
    - allow for the grouping of variables of different data types under a single name
    - make it easier to manage and organize complex data by creating objects
    - main diff between structure and class: default access specifier 
        - members of a structure are public by default
        - members of a class are private by default


    Structures
        - defined using 'struct' keyword followed by struct's name and curly braces
        - members can be of different data types
        - create an object of structure by calling the structure name and creating a name for the instance
        - access members of structure using the dot operator
        
        ex: struct Person {
                std::string name;
                int age;
                float height;
            };

        Person bob; 

        bob.name = "Bob Joe";
        bob.age = 43;
        bob.height = 5.75;


    Classes
        - defined using 'class' keyword followed by class' name and curly braces
        - members can be of different data types
        - can create class objects using the class name followed by object name

        ex: class Student{
                int id;
                std::string name;
                float gpa;

                public:
                    void setter(std::string name, int id, float gpa){
                        //set name, id, gpa
                    }

                    void getter(){
                        //print name, id, gpa
                    }
            };

            Student joe;
            joe.setter("Joe Bob", 4435, 2.1);
            joe.getter();

    
    **classes provide more control over data encapsulation and can be used to implement more advanced features like inheritance and polymorphism**

*/
