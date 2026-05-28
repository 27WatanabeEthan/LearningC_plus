#include <iostream>

int my_num = 3; // this variable is global

void print_num();

int main(){
    /*
    Local variables are declared inside a function or block {}
    Global variables are declared outside of all functions
    */

    int my_num = 1; // local variables are prioritized
    std::cout << my_num << std::endl;
    std::cout << ::my_num << std::endl; 
    // :: is the scope resolution operator and it tells the computer to use the global variable
    
    print_num();

    return 0;
}
void print_num(){
    std::cout << my_num << std::endl;
}