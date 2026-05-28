#include <iostream>

int main(){
    using std::cout, std::endl;

    std::string students[] = {"Ethan", "Jenna", "James", "Duy"};
    int size = sizeof(students)/sizeof(std::string);

    for (int i = 0; i < size; i++)
    {
        cout << "Hi, " << students[i] << endl;
    }
    

    return 0;
}