#include <iostream>

// https://cplusplus.com/reference/string/string/

int main(){
    std::string name;

    std::cout << "Please enter your name: ";
    std::getline(std::cin, name);

    if (name.empty()){
        // empty() returns a boolean of where or not the string is empty
        std::cout << "You did not enter a name\n";
    }
    else{

        if(name.length() > 12){
            std::cout << "Your name can't be over 12 characters.\n";
        }
        else{
            std::cout << "Welcome, " << name << "!\n";
            std::cout << "The first letter of your name is: " << name.at(0) << std::endl;
            // name.at(i) returns a character from an index in the string
    }
    }
    // name.clear()
    // name.append()
    // name.insert(i, "thing") inserts a character at the index i
    // name.find('thing') returns the first instance of 'thing' in the string
    // name.erase(start, end) erases characters from indices start to end

    return 0;
}