#include <iostream>

enum Day{sunday = 0,
         monday = 1, 
         tuesday = 2, 
         wednesday = 3, 
         thursday = 4, 
         friday = 5, 
         saturday = 6};
// enums by default set up the name-integer pairs this way
enum Flavors{vanilla, chocolate, sherbert, strawberry};
enum nuclei{carbon = 6, hydrogen = 1, oxygen = 8, uranium = 92};

int main(){
    using std::cout, std::endl;
    /*
    Enums are user-defined data types that consist of paired name-integer constants.
    - GREAT if we have a set of potential options
    */

    Day today = tuesday;
    switch (today){
        case 0: cout << "It is Sunday\n";
            break;
        case monday: cout << "It is Monday\n"; // we can use either the name or the integer
            break;
        case tuesday: cout << "It is Tuesday\n";
            break;
        default:
            break;
    }
    Flavors tasty = vanilla;
    cout << tasty << endl;
    nuclei fissionable = uranium;
    cout << fissionable << endl;
    return 0;
}