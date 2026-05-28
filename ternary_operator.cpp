#include <iostream>

int main(){
    /*
    ternary operator (?) is the replacement to an if/else statement
    >> condition ? expression1 : expression2;
    */
    using std::endl;

    int grade = 75;

    // if(grade >= 60){
    //     std::cout << "You pass!";
    // }
    // else{
    //     std::cout << "You fail!";
    // }

    grade >= 60 ? std::cout << "You pass!" << endl : std::cout << "You fail!" << endl;
    // >> condition ? if true : if false;

    int number = 9;
    number % 2 == 0 ? std::cout << "Even!" << endl : std::cout << "Odd!" << endl;

    // There's a faster way to write this

    bool hungry = false;
    std::cout << (hungry ? "You are hungry" : "You are full") << endl;

    return 0;
}