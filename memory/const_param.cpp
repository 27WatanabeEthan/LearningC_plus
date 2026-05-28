#include <iostream>

void print_info(std::string name, int age);

int main(){
    /*
    constant parameters make it so that the parameters are effectively unchangeable
     They are great for pass-by reference functions so we don't accidentally the value of the main variable
    */
    using std::cout, std::endl;
    std::string name = "Ethan";
    int age = 20;
    print_info(name, age);

    return 0;
}

void print_info(const std::string name, const int age){
    // name = " ";
    // age = 0;
    // these statements will cause an error since we can't edit name and age parameters
    std::cout << name << " is " << age << " years-old" << std::endl;


}