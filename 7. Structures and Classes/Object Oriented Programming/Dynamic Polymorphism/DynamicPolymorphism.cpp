/*

Dynamic polymorphism
    - a concept where a derived class can override or redefine methods of its base class
    - a single method call can have different implementations based on the type of object it's called on
    - achieved through virtual functions 
        - member functions of a base class marked with the 'virtual' keyword
        - when you specify a virtual function in a base class it can be overriden in any derived class to provide different implementation

*/

#include <iostream>

class Shape{
    public:
        virtual void draw(){
            std::cout << "Drawing a shape" << std::endl;
        }
};

class Square : public Shape{
    public:
        void draw() override{
            std::cout << "Drawing a square" << std::endl;
        }
};

class Circle : public Shape{
    public:
        void draw() override{
            std::cout << "Drawing a circle" << std::endl;
        }
};

int main(){

    Shape* shape; // initialize a Shape pointer 
    Square square; // create an instance of a square 
    Circle circle; // create an instance of a circle

    shape = &square; // set the shape pointer to point to square
    shape->draw();

    shape = &circle; // set the shape pointer to point to circle
    shape->draw();

    return 0;
}

/*
Console output:

Drawing a square
Drawing a circle

*/