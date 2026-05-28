#include <iostream>

int main(){
    // break; break out of the loop
    // continue; skip the current iteration
    for(int i = 0; i < 20; i++){
        if(i == 13){
            continue;
        }
        std::cout << i << " ";
    }

    return 0;
}