#include <iostream>
#include <memory>
#include <vector>

class Reactor{
    public:
    Reactor() { std::cout << "Reactor online\n"; }
    ~Reactor() { std::cout << "Reactor safely shut down.\n"; }
    void check_status() const {
        std::cout << "Core temperature stable.\n";
    }
};

void inspect_reactor(const Reactor *r){
    // when we only want to look at the object
    r->check_status();
}

int main(){
    using std::cout, std::endl;
    /*
    A unique_ptr can delete on its own when the program goes out of scope.
    Without having to manually delete the pointer
    */

    // Create a unique_ptr manage a Reactor object on the heap
    // std::make_unique<Reactor>();

    std::unique_ptr<Reactor> my_reactor = std::make_unique<Reactor>();
    // my_reactor is a unique pointer to a created Reactor object

    cout << my_reactor.get() << endl; // get() method will return the memory address of the unique pointer

    // (*my_reactor).check_status();
    my_reactor->check_status();
    cout << endl;
    // method for passing a unique ptr into a function
    inspect_reactor(my_reactor.get());

    // a unique ptr can't share an address, so we have to move it
    std::unique_ptr<Reactor> reactor1 = std::move(my_reactor);
    cout << reactor1.get() << endl;

    return 0;
}