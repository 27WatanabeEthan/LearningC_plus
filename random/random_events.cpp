#include <iostream>
#include <ctime>

int main(){
    srand(time(0));
    int rand_num = rand() % 5 + 1; // [1, 5]
    switch (rand_num)
    {
        case 1:
            /* code */
            break;
        case 2:
            /* code */
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break;
        default:
            break;
    }

    return 0;
}