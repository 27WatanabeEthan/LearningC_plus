#include <iostream>

int main(){
    /*
    Arithmetic operators return the result of a specific arithmetic operation
    PEMDAS applies
    */

    int students = 20;
    
    // students = students + 1;
    // students += 1;
    students++; // ++ operator adds one to variable, commonly used for loops

    int points = 10;
    // points -= 1;
    points--;

    int population = 100;
    population *= 2;

    double dollars = 26.99;
    dollars /= 2;

    int remainder = population % 3;

    std::cout << students << std::endl;
    std::cout << points << std::endl;
    std::cout << population << std::endl;
    std::cout << dollars << std::endl;
    std::cout << "Remainder: " << remainder << std::endl;
    return 0;
}