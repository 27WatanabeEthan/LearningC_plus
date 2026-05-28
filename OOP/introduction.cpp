#include <iostream>

class Human{
    public:
        // attributes
        std::string name;
        std::string occupation;
        int age;

        // methods
        void eat(){
            std::cout << "This person is eating\n";
        }
        void drink(){
            std::cout << "This person is drinking\n";
        }
        void sleep(){
            std::cout << "This person is sleeping\n";
        }

};

int main(){
    using std::cout, std::endl;
    /*
    Objects are a collection of attributes and methods
    - Created from a class
    */

    Human human1;
    human1.name = "James";
    human1.occupation = "Researcher";
    human1.age = 21;

    // objects differ from structs in that they can perform methods
    human1.sleep();
    return 0;
}