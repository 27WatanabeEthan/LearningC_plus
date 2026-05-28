#include <iostream>

int main(){
    using std::cout, std::endl;
    /*
    A memory address is a location in memory where data is stored
     They can be accessed with the & (address-of) operator 
    */
    std::string name = "Ethan";
    int age = 20;
    bool student = true;

    cout << &name << endl; // will print out a hexadecimal address
    cout << &age << endl;
    cout << &student << endl;

    return 0;
}