#include <iostream>
#include <vector>

int main(){
    using std::cout, std::endl;
    /*
    Dynamic Memory is memory that is allocated after the program is already compiled and running.
    - Use the 'new' operator to allocate memory in the heap rather than the stack.
    - This is useful when we don't know how much memory we will need.
    - Makes the program more flexible, especially when accepting user input.
    */

    int *pNum = NULL;
    pNum = new int;

    *pNum = 20;

    // cout << "Address: " << pNum << endl;
    // cout << "Value: " << *pNum << endl;

    delete pNum; // good practice to delete the variable when using the 'new' operator
    // this will free up the memory space

    std::vector<char> *pGrades = nullptr;
    int size;
    cout << "How many grades would you like to enter?: ";
    std::cin >> size;
    pGrades = new std::vector<char>;
    for(int i = 0; i < size; i++){
        cout << "Please enter grade #" << i + 1 << ": ";
        char temp;
        std::cin >> temp;
        (*pGrades).push_back(temp); // will append some value at the end of the vector
    }
    cout << (*pGrades)[1] << endl;

    // pGrades = new std::vector<char>;
    // *pGrades = {'A', 'A', 'C'};
    // cout << "Address: " << pGrades << endl;
    // cout << "Value: " << (*pGrades)[0] << endl;
    delete pGrades;
    return 0;
}