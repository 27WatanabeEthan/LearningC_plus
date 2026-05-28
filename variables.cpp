#include <iostream>

int main(){

    // int x; // declaration as an (int)eger
    // x = 5; // assignment

    // We can also combine this into one line
    int x = 5;
    int y = 6;
    int sum = x + y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    int age = 7.5; // since we declare as an integer, decimal is truncated and we are left with 7

    // double --> a number with a decimal
    double price = 10.99;
    double gpa = 3.62;

    // single character
    char grade = 'A';
    char initial = 'E';

    // boolean
    bool is_student = true;
    bool is_21 = false;

    // string (object that represents a sequence of text)
    std::string name = "Ethan";

    std::cout << "Hi, " << name << "!\n";
    return 0;
}
