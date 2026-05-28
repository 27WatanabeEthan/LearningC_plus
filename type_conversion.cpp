#include <iostream>

int main(){
    /*
    Type conversion is the conversion of a value of one data type to another
    Implicit = automatic
    Explicit = Preced value with new data type
    */

    double x = (int) 3.14; // implicitly turned this double into an integer
    int y = 100; // 100 is the ascii code for "d"

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;

    std::cout << x << std::endl;
    std::cout << (char) y << std::endl;
    std::cout << score << "%\n";


    return 0;
}