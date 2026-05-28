#include <iostream>
#include <vector>

int main(){
    using std::cout, std::endl;
    std::vector<int> ages(5, 1);
    const std::size_t SIZE = ages.size();
    // cout << SIZE << endl;

    for(int i = 0; i < SIZE; i++){
        if(i == SIZE - 1){
            cout << ages[i] << endl;
        }
        else{
            cout << ages[i] << ", ";
        }
    }

    return 0;
}