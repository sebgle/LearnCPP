/*

Multiple Inheritance
    - a class can inherit characteristics (data and function members) from more than one parent class
    - similar to single inheritance where a class inherits from a single base class
    - in multiple inheritance, class can have multiple base classes

    Syntax:
    class DerivedClass: access-specifier BaseClass1, access-specifier BaseClass2, ...{
        // class body
    };

    - DerivedClass will inherit members from both BaseClass1 and BaseClass2
    - the access specifier (ex: public, protected, private) determines the accessibility of the inherited members

*/

#include <iostream>

class Animal{
    public:
        void eat(std::string food){
            std::cout << "nom nom nom, I love " << food << "!" << std::endl;
        }

        //constructor
        Animal(int years){
            this->age = years;
        }

        void getAge(){
            std::cout << "Animal's age: " << age << std::endl;
        }

    private:
        int age;
};

class Mammal{
    public:
        void getWarm(){
            std::cout << "generating body heat..." << std::endl;
        }
};

class Dog : public Animal, public Mammal{
    public:
        using Animal::Animal; //using the animal constructor 

        void talk(){
            std::cout << "woof woof" << std::endl;
        }
};

int main(){

    Dog myDog(4);
    myDog.getAge();
    myDog.eat("dog food");
    myDog.getWarm();
    myDog.talk();

    return 0;
}

/*
Console output:

Animal's age: 4
nom nom nom, I love dog food!
generating body heat...
woof woof

*/