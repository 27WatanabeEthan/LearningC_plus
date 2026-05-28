#include <iostream>

int get_digit(const int number);
int sum_odd_digits(const std::string card_number);
int sum_even_digits(const std::string card_number);

int main(){
    using std::cout, std::endl;
    /*
    Luhn Algorithm
    1. Double every second digit from right to left
        If doubled number is digits, split them
    2. Add all single digits from step 1
    3. Add all odd numbered digits from right to left
    4. Sum results from steps 2 & 3
    5. If step 4 is divisible by 10, # is valid
    */

    std::string card_number;
    int result = 0;

    std::cout << "Enter a credit card number: ";
    std::cin >> card_number;

    result = sum_odd_digits(card_number) + sum_even_digits(card_number);
    // cout << (int)card_number[1];

    if(result % 10 == 0){
        cout << "Card number is valid\n";
    }
    else{
        cout << "Card number is invalid\n";
    }

    return 0;
}
int get_digit(const int number){
    // number % 10 will get the number in the ones place
    // number / 10 % 10 will return the number in the 10s place
    //  integer division by 10 will result in a whole number

    return number % 10 + (number / 10 % 10);
}
int sum_odd_digits(const std::string card_number){
    const std::size_t SIZE = card_number.size();
    int sum = 0;

    for(int i = SIZE - 1; i >= 0; i-=2){
        sum += (int)card_number[i] - '0';
        // get_digit() takes an integer as an argument. So, card_number[i] will return a decimal.
        //  subtract by '0' or 48 to get the true integer value

    }

    return sum;
}
int sum_even_digits(const std::string card_number){
    const std::size_t SIZE = card_number.size();
    int sum = 0;

    for(int i = SIZE - 2; i >= 0; i-=2){
        sum += get_digit((card_number[i] - '0') * 2);
        // get_digit() takes an integer as an argument. So, card_number[i] will return a decimal.
        //  subtract by '0' or 48 to get the true integer value

    }

    return sum;
}