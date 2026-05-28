#include <iostream>
#include <cmath>

int main(){
    char op;
    double num1;
    double num2;

    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    std::cout << "Enter operator (+, -, *, or /): ";
    std::cin >> op;
    
    switch(op){
        case '+':
            std::cout << num1 + num2;
            break;
        case '-':
            std::cout << num1 - num2;
            break;
        case '*':
            std::cout << num1 * num2;
            break;
        case '/':
            std::cout << num1 - num2;
            break;
        default:
            std::cout << "Please enter a valid operator" << std::endl;
    }
    return 0;
}