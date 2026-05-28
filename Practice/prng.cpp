#include <iostream>
#include <vector>
#include <ctime>
#include <cmath>

std::vector<int> prng(int size=1, int seed=time(NULL)){
    std::vector<int> result(size);
    // srand(seed);
    int m = pow(2, 4);
    const int a = 5;
    const int c = 13;

    for(int i = 0; i < size; i++){
        if(i==0){
            result[i] = (a*seed + c) % m;
        }
        else{
            result[i] = (a*result[i-1] + c) % m;
        }
    }
    
    return result;

}

int main(){
    using std::cout, std::endl;
    auto nums = prng(16);

    for(int x : nums){
        cout << x / pow(2, 4) << endl;
    }
    // cout << endl;

    return 0;  
}