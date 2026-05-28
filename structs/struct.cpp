#include <iostream>

struct student{
    std::string name;
    double gpa;
    bool enrolled = true;
    // kind of like creating a new data type with these three properties
};

int main(){
    using std::cout, std::endl;
    /*
    A structure is a group of related variables under one name.
    - Structs can have many different data types
    - Variables in a struct are "members"
    - Members can be accessed with "Class Member Access Operator"
    */
    
    student student1;
    student1.name = "Ethan";
    student1.gpa = 3.95;
    // student1.enrolled = true;

    student student2;
    student2.name = "Edric";
    student2.gpa = 3.00;
    // student2.enrolled = true;

    cout << student1.name << endl;
    cout << student1.gpa << endl;
    cout << student1.enrolled << endl;

    cout << student2.name << endl;
    cout << student2.gpa << endl;
    cout << student2.enrolled << endl;

    return 0;
}