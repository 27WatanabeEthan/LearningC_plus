#include <iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main(){
    /*
    Name space provides a solution for preventing name conflicts in large projects
    Each entity needs a unique name
    A namespace allows for identically named entities as long as the namespaces are different
    */
   
    using namespace first; // We can also initialize namespace
    // using namespace std; // DO NOT USE THIS, EVIL
    //  potential naming conflicts because std namespace is so large
    using std::cout;
    using std::endl;
    using std::string; // These are a lot safer to use

    int x = 0;
    cout << "My number is " << x << endl;
    cout << "My number is " << first::x << endl;
    cout << "My number is " << second::x << endl;
    // Without specifying namespace, we default to local variable
    return 0;
}