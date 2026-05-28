#include <iostream>

class Pizza{
    public:
        std::string topping1;
        std::string topping2;
    
    Pizza(){}
    Pizza(std::string topping1){
        this->topping1 = topping1;
    }
    Pizza(std::string topping1, std::string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
    // now we can make a pizza with one or two toppings
};

int main(){
    using std::cout, std::endl;
    /*
    Multiple constructors w/ the same name but different parameters.
    This allows for varying arguments when instantiating an object. 
    */
    Pizza pizza1("pepperoni", "olives");
    cout << pizza1.topping2 << endl;


    return 0;
}