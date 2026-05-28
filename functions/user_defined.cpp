#include <iostream>

void happy_birthday(std::string name, int age); // initilalize it first so that the main function can call the function
//                         despite being placed after the main function

int main(){

    std::string name = "Ethan";
    int age = 21;
    happy_birthday(name, age);

    return 0;
}

// functions are typically put after the main function for readability
void happy_birthday(std::string name, int age){
    std::cout << "Happy Birthday! " << name << std::endl;
    std::cout << "Happy Birthday! " << name << std::endl;
    std::cout << "Happy Birthday! " << name << std::endl;
    std::cout << "You are now " << age << " years old!\n";
}