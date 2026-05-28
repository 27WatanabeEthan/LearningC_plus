#include <iostream>

int main(){
    using std::cout, std::endl;
    /*
    Null values are a special kind of value which means something has no value.
     When a pointer is holding a null value, that pointer is not pointing at anything (null pointer)

    A nullptr is a keyword that represents a null pointer literal
     Helpful when determining if an address was successfully assigned to a pointer
     Dereferencing a nullptr can lead to undefined behavior
    */
    int *pointer = nullptr; // good practice to assign a pointer to nullptr if we don't assign it a value right away
    int x = 67;
    
    pointer = &x;
    // cout << *pointer << endl;

    // Here is a common method to figure out if my pointer has a valid address
    if(pointer == nullptr){
        cout << "Address was not assigned" << endl;
    }
    else{
        cout << "Address was assigned: " << *pointer << endl;
    }


    return 0;
}