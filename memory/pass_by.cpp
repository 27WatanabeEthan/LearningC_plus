#include <iostream>

void swap(std::string &x, std::string &y);

int main(){
    using std::cout, std::endl;
    std::string x = "Kool-Aid";
    std::string y = "Water";
    std::string temp;

    swap(x, y);
    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;

    return 0;
}

// when we pass a variable in a function, the function creates a copy
//  this is called pass by value

// void swap(std::string x, std::string y){
    
//     std::string temp;
//     temp = x;
//     x = y;
//     y = temp;
// }

// this is called pass by reference
void swap(std::string &x, std::string &y){
    
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}