#include <iostream>
#include <cmath>

class Animal{
    public:
        bool alive = true;
        void eat(){
            std::cout << "This animal is eating.\n";
        }
};
class Dog : public Animal{
    // Dog object will have all of the attributes and methods of Animal
    public:
        void bark(){
            std::cout << "This dog is barking.\n";
        }
};
class Cat : public Animal{
    public:
        void meow(){
            std::cout << "This cat is meowing.\n";
        }
};
class Shape{
    public:
        double area;
        double volume;
        void display(){
            std::cout << "Area: " << area << std::endl;
            std::cout << "Volume: " << volume << std::endl;
        }
};
class Cube : public Shape{
    public:
        double side;
    Cube(double _side){
        side = _side;
        area = pow(_side, 2) * 6;
        volume = pow(_side, 3);
    }
};
class Sphere : public Shape{
    public:
        double radius;
    Sphere(double _radius){
        radius = _radius;
        area = pow(_radius, 2) * 4 * M_PI;
        volume = pow(_radius, 3) * 4/3 * M_PI;
    }
};
int main(){
    using std::cout, std::endl;
    /*
    A class can receive attributes and methods from another class.
    Children classes inherit from a parent class.
    Helps to reuse similar code found within multiple classes
    */
    
    Dog dog1;
    dog1.eat();
    dog1.bark();

    Cat cat1;
    cat1.meow();

    Cube cube1(5);
    cube1.display();
    Sphere sphere1(4);
    sphere1.display();
    return 0;
}