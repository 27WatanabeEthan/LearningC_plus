#include <iostream>
template <typename T, typename U>
auto max(T x, U y){
    // T is a common naming convention (Thing)
    // This function is setup to accept two different datatypes
    return (x > y) ? x : y;
}

int main(){
    using std::cout, std::endl;
    /*
    A function template describes what a function looks like.
    - Can be used to generate as many overloaded functions as needed, each using different data types
    */
    
    // we could create overloaded functions or create a function template that could accept multiple datatypes
    cout << max(1.1, 3) << endl;

    return 0;
}