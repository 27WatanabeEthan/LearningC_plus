#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main(){
    std::string name;
    int age;

    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "What's your name?: "; 
    std::getline(std::cin >> std::ws, name);
    // std::cin >> name; // Will only return the first word (no spaces)



    std::cout << "Hello " << name << std::endl;
    std::cout << "You are " << age << " years old" << std::endl;
    return 0;
}