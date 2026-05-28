#include <iostream>

int main(){
    /*
    The const keyword specifies that a variable's value is constant
    It tells the compiler to prevent anything from modifying it (read-only)
    */

    const double PI = 3.141592;
    // we don't want anyone change the value of pi
    // common naming convention to put constant variables in all caps
    double radius = 10.0;
    double circumference = 2 * PI * radius;

    std::cout << circumference << " cm\n";

    const double SPEED_OF_LIGHT = 2.998e8;
    std::cout << "Speed of light is " << SPEED_OF_LIGHT << " m/s\n";
}