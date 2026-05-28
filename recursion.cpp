#include <iostream>

void walk_iter(int steps);
void walk_recursion(int steps);
int factorial(int num);

int main(){
    /*
    Recursion is a technique where a function invokes itself from within.
    - We can break a complex concept into a repeatable single step
    - Less code and is cleaner. Useful for searching and sorting algorithms
    - But it uses more memory and is slower
    */

    // walk_iter(20);
    // walk_recursion(20);
    std::cout << factorial(10);

    return 0;
}

void walk_iter(int steps){
    // iterative approach
    for(int i = 0; i < steps; i++){
        std::cout << "You take a step!\n";
    }

}
void walk_recursion(int steps){
    // recursive approach
    if(steps > 0){
        std::cout << "You take a step!\n";
        walk_recursion(steps - 1); // call the function within the function
    }

}
int factorial(int num){
    if(num > 1){
        return num * factorial(num - 1);
    }
    else{
        return 1;
    }
}