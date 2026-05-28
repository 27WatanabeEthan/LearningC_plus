#include <iostream>

double get_sum(double prices[], int size); // the brackets will indicate that we want an array as one of the parameters

int main(){
    using std::cout, std::endl;
    
    double prices[] = {12.99, 13.99, 51.00, 2.65};
    int size = sizeof(prices)/sizeof(double);

    double total = get_sum(prices, size);

    cout << "$" << total << endl;

    return 0;
}

double get_sum(double prices[], int size){
    // the function will turn the prices array into a pointer so we can't determine the size from within the function
    double total = 0;
    for(int i = 0; i < size; i++){
        total += prices[i];
    }
    return total;
}