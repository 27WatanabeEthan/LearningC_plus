#include <iostream>

struct Car{
    std::string model;
    int year;
    std::string color;
};
void print_car(Car car);
void paint_car(Car &car, std::string color);

int main(){
    Car car1;
    Car car2;

    car1.model = "Lexus";
    car1.year = 2009;
    car1.color = "Black";

    car2.model = "Volkswagen";
    car2.year = 2015;
    car2.color = "Gray";

    paint_car(car1, "Green");
    paint_car(car2, "Gold");

    print_car(car1);
    print_car(car2);

    return 0;
}

void print_car(Car car){
    // make sure to add & symbol if we want to pass by reference
    std::cout << car.model << std::endl;
    std::cout << car.year << std::endl;
    std::cout << car.color << std::endl;
}

void paint_car(Car &car, std::string color){
    car.color = color;
}