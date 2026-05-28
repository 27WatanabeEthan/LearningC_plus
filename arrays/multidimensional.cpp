#include <iostream>

int main(){
    using std::cout, std::endl;
    // [rows][cols]
    std::string cars[][3] = {{"Mustang", "Escape", "F-150"},
                            {"Corvette", "Equinox", "Silverado"},
                            {"Challenger", "Durango", "Ram 1500"},
                            {"Toyota", "Lexus", "Nissan"}};
    // we don't have to initialize number of rows, only columns
    const int COLS = sizeof(cars[0])/sizeof(cars[0][0]);
    const int ROWS = sizeof(cars)/sizeof(cars[0]);
    // cout << ROWS;
    // cout << cars[0][0] << endl;
    for(int row = 0; row < ROWS; row++){
        for(int col = 0; col < COLS; col++){
            cout << cars[row][col] << " ";
        }
        cout << endl;
    }
    return 0;
}