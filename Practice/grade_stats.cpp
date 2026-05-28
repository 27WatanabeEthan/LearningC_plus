#include <iostream>

void mean(double nums[], int size);
void max(double nums[], int size);
void min(double nums[], int size);

int main(){
    using std::cout, std::cin, std::endl;

    int n;
    cout << "How many grades would you like to enter?: ";
    cin >> n;
    double grades[n];

    for(int i = 0; i < n; i++){
        cout << "Grade " << i+1 << ": ";
        cin >> grades[i];
    }
    mean(grades, n);
    max(grades, n);
    min(grades, n);

    return 0;
}
void mean(double nums[], int size){
    double result = 0.0;
    for(int i = 0; i < size; i++){
        result += nums[i];
    }
    result /= size;
    std::cout << "Mean: " << result << std::endl;
}
void max(double nums[], int size){
    double result = nums[0];
    for(int i = 1; i < size; i++){
        if(nums[i] > result){
            result = nums[i];
        }
    }
    std::cout << "Max: " << result << std::endl;
}
void min(double nums[], int size){
    double result = nums[0];
    for(int i = 1; i < size; i++){
        if(nums[i] < result){
            result = nums[i];
        }
    }
    std::cout << "Min: " << result << std::endl;
}