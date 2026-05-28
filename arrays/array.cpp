#include <iostream>

int main(){
    /*
    array is a data structure that can hold multiple values
     these values can then be accessed by an index
    */
    using std::cout;
    using std::endl;

    std::string car[] = {"Lexus", "Toyota", "Corvette"};
    // arrays can only hold values of one data type

    cout << car[0] << endl;
    cout << car[1] << endl;

    car[2] = "Acura";
    cout << car[2] << endl;

    std::string people[4]; // we have to say how many objects are going to be in the array
    people[0] = "Ethan";
    people[1] = "Jenna";
    people[2] = "Duy";
    people[3] = "James";

    return 0;
}