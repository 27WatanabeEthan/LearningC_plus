#include <iostream>

void bake_pizza();
void bake_pizza(std::string topping1);
void bake_pizza(std::string topping1, std::string topping2);

int main(){
    bake_pizza("cheese", "pepperoni");

    return 0;
}

void bake_pizza(){
    std::cout << "Here is your pizza!\n";
}

// functions can share the same name
// a function's parameters is its signature
void bake_pizza(std::string topping1){
    std::cout << "Here is your " + topping1 +  " pizza!\n";
}
void bake_pizza(std::string topping1, std::string topping2){
    std::cout << "Here is your " + topping1 + " and " + topping2 + " pizza!\n";
}