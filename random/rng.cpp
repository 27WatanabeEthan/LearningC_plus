#include <iostream>
#include <ctime>

int main(){
    // We are going to use psuedo-random numbers
    srand(time(NULL));
    std::cout << time(NULL) << std::endl;
    int num = rand(); // generates a random number between 0 and 32767
    std::cout << num << std::endl;
    // std::cout << time(NULL) << std::endl;
    // std::cout << time(0) << std::endl;
    // time(0) == time(NULL)

    int die_roll1 = (rand() % 6) + 1; // random integer [1, 6]
    int die_roll2 = (rand() % 6) + 1; // random integer [1, 6]
    int die_roll3 = (rand() % 6) + 1; // random integer [1, 6]

    std::cout << die_roll1 << std::endl;
    std::cout << die_roll2 << std::endl;
    std::cout << die_roll3 << std::endl;

    long long_rand = rand();
    std::cout << long_rand;

    // for(int i=0; i<10; i++){
    //     for(int j=0; j<20; j++){
    //         std::cout << rand() << " ";
    //     }
    //     std::cout << "\n";
    // }
    return 0;
}