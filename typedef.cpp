#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t; // very long datatype, which we can rename to "pairlist_t"
typedef std::string text_t;
typedef int number_t;

// we could also use the "using" keyword to do the same thing
using decimal = double;

int main(){
    /*
    typdef is a reserved keyword used to create an additional name (alias) for another data type
    New identifier for an existing type
    Helps with readability and avoids typos 
    */

    text_t first_name = "Ethan";
    number_t age = 20;
    std::cout << first_name << std::endl;
    std::cout << "I am " << age << " years old" << std::endl;

    decimal gpa = 3.92;
    std::cout << "My gpa is " << gpa << std::endl;
}