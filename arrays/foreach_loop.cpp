#include <iostream>

int main(){
    /*
    foreach loop is a loop that eases traversal over an iterable dataset
     less syntax than a standard for loop but less flexible
    */
    using std::cout, std::endl;

    std::string students[] = {"Ethan", "Jenna", "James", "Duy"};
    for(std::string student : students){ // similar to python's "for student in students:"
        cout << student << endl;
    }

    return 0;
}