#include <iostream>
#include <ctime>

char get_user_choice();
char get_computer_choice();
void show_choice(char choice);
void choose_winner(char player, char computer);

int main(){
    char player;
    char computer;

    player = get_user_choice();
    show_choice(player);
    computer = get_computer_choice();

    choose_winner(player, computer);

    return 0;
}

char get_user_choice(){
    char player;
    std::cout << "Rock Paper Scissors Game\n";
    do{
        std::cout << "************************\n";
        std::cout << "Choose rock, paper or scissors (r, p, s): ";
        std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');
    
    return player;
}
char get_computer_choice(){
    srand(time(0));
    int choice = rand() % 3;
    char computer;

    std::cout << "The computer chose: ";
    switch (choice)
    {
    case 0: 
        computer = 'r';
        std::cout << "Rock\n";
        break;
    case 1: 
        computer = 'p';
        std::cout << "Paper\n";
        break;
    case 2: 
        computer = 's';
        std::cout << "Scissors\n";
        break;
    }
    return computer;
}
void show_choice(char choice){
    std::cout << "You chose: ";
    switch(choice){
        case 'r':
            std::cout << "Rock\n";
            break;
        case 'p':
            std::cout << "Paper\n";
            break;
        case 's':
            std::cout << "Scissors\n";
            break;
    }
}
void choose_winner(char player, char computer){
    using std::cout;
    using std::endl;
    
    switch (player)
    {
    case 'r':
        if(computer == 'r'){
            cout << "It's a tie!" << endl;
        }
        else if(computer == 'p'){
            cout << "You lose :(" << endl;
        }
        else{ // scissors
            cout << "You win!" << endl;
        }
        break;
    
    case 'p':
        if(computer == 'r'){
            cout << "You win!" << endl;
        }
        else if(computer == 'p'){
            cout << "It's a tie!" << endl;
        }
        else{ // scissors
            cout << "You lose :(" << endl;
        }
        break;
    
    case 's':
        if(computer == 'r'){
            cout << "You lose :(" << endl;
        }
        else if(computer == 'p'){
            cout << "You win!" << endl;
        }
        else{ // scissors
            cout << "It's a tie!" << endl;
        }
        break;
    }
}