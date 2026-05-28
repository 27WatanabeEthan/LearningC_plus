#include <iostream>

void sort(int array[], int size);

int main(){
    // we will use a bubble sort technique
    using std::cout, std::endl;

    int array[] = {10, 8, 1, 3, 2, 6, 5, 9, 4, 7};
    int size = sizeof(array)/sizeof(int);

    sort(array, size);

    for(int element : array){
        cout << element << " ";
    }

    

    return 0;
}
void sort(int array[], int size){
    int temp;
    for(int i = 0; i < size-1; i++){ // we don't have to sort the last element of the array
        for(int j = 0; j < size-i-1; j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }

    }
}