#include <iostream>

int main(){
    // if statements
    using std::endl;

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    /*
    Logical Operators:
    && --> and
    || --> or
    ! --> not
    */

    if(age >= 18 && age < 100){
        std::cout << "You are an adult." << endl;
    }
    else if(age < 0){
        std::cout << "You have not been born yet." << endl;
    }
    else if(age >= 100){
        std::cout << "You are too old to enter." << endl;
    }
    else{
        std::cout << "You are not old enough to enter." << endl;
    }

    int temp = 20;
    if(temp != 30){
        std::cout << "It is not 30 degrees\n";
    }
    return 0;
}