#include <iostream>

int main(){
    /*
    sizeof() will give us the size of a value in bytes
    */
    using std::cout, std::endl;
    
    double gpa = 3.9;
    cout << sizeof(gpa) << " bytes" << endl;

    std::string name = "Ethan Watanabe";
    cout << sizeof(name) << " bytes" << endl;

    char grade = 'f';
    cout << sizeof(grade) << " bytes" << endl;

    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    cout << sizeof(grades) << " bytes" << endl;

    // we can use the sizeof() function to determine how many values are in an array
    cout << sizeof(grades)/sizeof(char) << " elements in this array" << endl;

    std::string students[] = {"Ethan", "Jenna", "James", "Duy"};
    cout << sizeof(students)/sizeof(std::string) << " elements in this array" << endl;

    return 0;
}