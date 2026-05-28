#include <iostream>

// **While Loops**

// int main(){
//     std::string name;

//     while(name.empty()){
//         std::cout << "Enter your name: ";
//         std::getline(std::cin, name);
//     }

//     std::cout << "Hello, " << name << std::endl;
//     return 0;
// }

// **Do While Loops**
int main(){
    // do some block of code first, THEN repeat if the condition is true
    
    int number;
    // initially number does not have a value
    //  we have to do something first before we can execute the while loop
    do{
        // we'll run this code first and then the computer will start checking the number < 0 condition to continue the loop
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    }while(number <= 0);

    std::cout << "Your number is: " << number << std::endl;
    return 0;
}