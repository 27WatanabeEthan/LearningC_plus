#include <iostream>

void change(int& a){
    a = 22;
    // this can change the value of the original argument
}
void doesnt_change(int a){
    a = 21;

}

int main(){
    int x = 5;
    int y = 7;

    change(x);
    std::cout << x << std::endl;

    doesnt_change(y);
    std::cout << y << std::endl;

    return 0;
}