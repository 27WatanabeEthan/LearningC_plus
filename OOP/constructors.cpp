#include <iostream>

class Student{
    public:
        std::string name;
        int age;
        double gpa;

    // constructor
    // Student(std::string name, int age, double gpa){
    //    this->name = name;
    //    this->age = age;
    //    this->gpa = gpa; 
    // }

    // OR
    Student(std::string x, int y, double z){
        name = x;
        age = y;
        gpa = z;
    }

};
class Car{
    public:
        std::string model;
        int year;
        std::string color;
    Car(std::string x, int y, std::string z){
        model = x;
        year = y;
        color = z;
    }

};
int main(){
    using std::cout, std::endl;
    /*
    Constructors are special methods that are automatically called when an object is initiated.
    - Useful for assigning values to attributes as arguments
    */

    Student student1("Ethan", 20, 3.95);
    cout << student1.name << endl;
    
    Car car1("Lexus ES 350", 2009, "Black");
    cout << car1.year << endl;
    return 0;
}