/*

Virtual Methods
    - allow subclass methods to override the methods of their base class
    - the appropriate method is called depending on the actual type of object at ritetime
    - to declare a method as virtual simply use the 'virtual' keyword at the method's declaration in the base class 

*/


class Shape{
    public:
        virtual double area() const{
            return 0;
        }
};

class Circle : public Shape{
    public:
        Circle(double r) : radius(r) {}

        double area() const override{
            return radius * radius * 3.14159265;
        }

    private:
        double radius;
};

class Rectangle : public Shape{
    public: 
        Rectangle(double w, double h) : width(w), height(h) {}

        double area() const override{
            return width * height;
        }

    private:
        double width;
        double height;
};

#include <iostream>

int main(){

    Circle circle(4);
    Rectangle rectangle(2,3);

    Shape* shape = &circle;
    std::cout << "The area of this circle is " << shape->area() << " square units." << std::endl;

    shape = &rectangle;
    std::cout << "The area of this rectangle is " << shape->area() << " square units." << std::endl;

    return 0;
}

/*
Console output:

The area of this circle is 50.2655 square units.
The area of this rectangle is 6 square units.

*/