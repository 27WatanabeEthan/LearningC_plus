#include <iostream>
#include <vector>

int main(){
    using std::cout, std::endl;
    /*
    Pointers are variables that store a memory address of another variable 
     Sometimes its easier to work with an address

    & address-of operator
    * deference operator
    */
    std::string name = "Edric";
    int age = 21;
    // std::vector<std::string> free_pizzas{"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    std::string *pName = &name; // common naming convention for pointers have a p
    int *pAge = &age;


    cout << pAge << endl;
    cout << *pAge << endl;

    return 0;
}