#include <iostream>

int main(){
    // fill() will fill a range of elements with a specified value
    // >>> fill(begin, end, value)
    using std::cout, std::endl;

    const int SIZE = 100;
    std::string foods[SIZE];
    fill(foods, foods + SIZE/2, "pizza");
    fill(foods + SIZE/2, foods + SIZE, "hot dogs");

    for(std::string food : foods){
        cout << food << " ";
    }

    return 0;
}