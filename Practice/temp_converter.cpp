#include <iostream>
#include <cmath>

int main(){
    std::cout << "***** TEMPERATURE CONVERTER ******\n";
    double temp;
    char unit;
    
    std::cout << "Please enter a temperature: ";
    std::cin >> temp;

    std::cout << "Please enter which unit you would like to convert to (F or C): ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        temp = (1.8 * temp) + 32;
        std::cout << temp << " F\n";
    }
    else if(unit == 'C' || unit == 'c'){
        temp = 5/9*(temp - 32);
        std::cout << temp << " C\n";
    }
    else{
        std::cout << "Invalid temperature unit :( \n)";
    }

    std::cout << "**********************************";

    return 0;
}