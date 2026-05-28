#include <iostream>
#include <iomanip>

void show_balance();
double deposit();
double withdraw();
double balance = 0;

int main(){
    
    bool active = true;
    int option;

    while(active){
        std::cout << "****** BANKING ******" << std::endl;
        std::cout << "1. Show Balance" << std::endl;
        std::cout << "2. Deposit" << std::endl;
        std::cout << "3. Withdraw" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Please select an option (1-4): ";
        std::cin >> option;

        switch (option)
        {
        case 1: show_balance();
            break;
        case 2: balance += deposit();
            break;
        case 3: {
            // when we declare a variable within a case, we have to enclose it in {}
            //  this specifies scope, which has to be done in C++
            double amount = withdraw();
            if(amount > balance){
                std::cout << "Insufficient Funds.\n";
            }
            else if(amount <= 0){
                std::cout << "Please enter a valid amount.\n";
            }
            else{
                balance -= amount;
            }
            break;
        }
        case 4: 
            active = false;
            std::cout << "Goodbye!\n";
            break;
        default:
            std::cout << "Please enter a valid option.\n";
            break;
        }
        std::cout << std::endl;
    }

    return 0;
}

void show_balance(){
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << std::endl;
}
double deposit(){
    double amt;
    std::cout << "How much would you like to deposit?: $";
    std::cin >> amt;
    return amt;
}
double withdraw(){
    double amt;
    std::cout << "How much would you like to withdraw?: $";
    std::cin >> amt;
    return amt;
}