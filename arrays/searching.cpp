#include <iostream>

int search_array(int array[], int size, int element);

int main(){
    using std::cout, std::cin, std::endl;
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int my_num;

    cout << "Enter element to search for: ";
    cin >> my_num;

    index = search_array(numbers, size, my_num);
    if(index != -1){
        cout << my_num << " is at index " << index << endl;

    }
    else{
        cout << my_num << " was not found :(" << endl;
    }
    return 0;
}

int search_array(int array[], int size, int element){
    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1; // means something wasn't found
}