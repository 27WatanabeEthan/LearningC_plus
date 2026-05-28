#include <iostream>

class Stove{
    private:
        // private variables can't be accessed in the outside world
        int temperature;
    public:
        // getter
        int get_temp(){
            return temperature;
        }
        // setter
        void set_temp(int x){
            if(x < 0){
                temperature = 0;
            }
            temperature = x;
        }
    // Constructor can use the class methods
    Stove(int x){
        set_temp(x);
    }


};

int main(){
    using std::cout, std::endl;
    /*
    Abstraction - hiding unecessary data from outside a class.
    Getters are functions that make a private attribute readable.
    Setters are functions that make a private attribute writeable.
    */

    Stove stove(200);
    // stove.set_temp(200);
    cout << "The stove's temperature is " << stove.get_temp() << " degrees\n";
    return 0;
}