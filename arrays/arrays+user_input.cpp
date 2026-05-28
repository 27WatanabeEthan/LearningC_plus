#include <iostream>

int main(){
    using std::cout, std::endl;

    const int SIZE = 5;
    std::string foods[SIZE];
    std::string temp;

    for(int i = 0; i < SIZE; i++){
        cout << "Please enter your favorite food, or type 'q' to quit #" << i + 1 << ": ";
        std::getline(std::cin, temp);
        if(temp == "q"){
            break;
        }
        else{
            foods[i] = temp;
        }
    }

    cout << "\nYou like the following foods:\n";

    for(int i = 0; !foods[i].empty(); i++){ // keeps looping as long as foods[i] is not empty
        cout << foods[i] << endl;
    }


    return 0;
}