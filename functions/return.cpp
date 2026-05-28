#include <iostream>
#include <cmath>

double square(double length);
double cube(double length);

std::string concat_strings(std::string string1, std::string string2);

int main(){
    // double length = 5.0;
    // double area = square(length);
    // double volume = cube(length);

    // std::cout << "Area: " << area << " cm^2\n";
    // std::cout << "Volume: " << volume << " cm^3\n";

    std::string first_name = "Ethan";
    std::string last_name = "Watanabe";
    std::string full_name = concat_strings(first_name, last_name);

    std::cout << "Hello! " << full_name << std::endl;
    return 0;
}

double square(double length){
    double result = pow(length, 2);
    return result; // return value has to match the type of the function
}
double cube(double length){
    double result = pow(length, 3);
    return result;
}
std::string concat_strings(std::string string1, std::string string2){
    return string1 + " " + string2;
}