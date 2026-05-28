#include <iostream>
#include <vector>
#include <ctime>

void draw_board(std::vector<char> spaces);
void player_move(std::vector<char> &spaces, char player);
void computer_move(std::vector<char> &spaces, char computer);
bool check_winner(std::vector<char> spaces, char player, char computer);
bool check_tie(std::vector<char> spaces);

int main(){
    using std::cout, std::endl;
    std::vector<char> spaces(9, ' ');
    char player = 'X';
    char computer = 'O';
    bool running = true;

    // std::vector<char> *pSpaces = &spaces;
    
    while(running){
        draw_board(spaces);
        player_move(spaces, player);
        // for(size_t i = 0; i < spaces.size(); i++){
        //     cout << spaces[i] << ", ";
        // }
        if(check_winner(spaces, player, computer)){
            draw_board(spaces);
            running = false;
            break;
        }
        if(check_tie(spaces)){
            draw_board(spaces);
            running = false;
            break;
        }

        computer_move(spaces, computer);
        if(check_winner(spaces, player, computer)){
            draw_board(spaces);
            running = false;
            break;
        }
        if(check_tie(spaces)){
            draw_board(spaces);
            running = false;
            break;
        }
    }

    return 0;
}

void draw_board(std::vector<char> spaces){
    std::cout << std::endl;
    std::cout << "     |     |     \n";
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  \n";
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |     \n";
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  \n";
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |     \n";
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  \n";
    std::cout << "     |     |     \n";
    std::cout << std::endl;
}
void player_move(std::vector<char> &spaces, char player){
    int number;
    do{
        std::cout << "Enter a spot to place a marker (1-9): ";
        std::cin >> number;
        number--;
        if(spaces[number] == ' '){
            spaces[number] = player;
            break;
        }

    }while(!number > 0 || !number < 8); // user can only input numbers 0-8
    

}
void computer_move(std::vector<char> &spaces, char computer){
    int number;
    srand(time(NULL));

    while(true){
        number = rand() % 9;
        if(spaces[number] == ' '){
            spaces[number] = computer;
            break;
        }

    }

}
bool check_winner(std::vector<char> spaces, char player, char computer){
    // check first row
    if(spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2]){
        spaces[0] == player ? std::cout << "You WIN!" << std::endl : std::cout << "You Lose." << std::endl;
        return true;
    }
    // check second row
    else if(spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5]){
        spaces[3] == player ? std::cout << "You WIN!" << std::endl : std::cout << "You Lose." << std::endl;
        return true;
    }
    // check last row
    else if(spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8]){
        spaces[6] == player ? std::cout << "You WIN!" << std::endl : std::cout << "You Lose." << std::endl;
        return true;
    }
    // check first column
    if(spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6]){
        spaces[0] == player ? std::cout << "You WIN!" << std::endl : std::cout << "You Lose." << std::endl;
        return true;
    }
    // check second column
    else if(spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7]){
        spaces[1] == player ? std::cout << "You WIN!" << std::endl : std::cout << "You Lose." << std::endl;
        return true;
    }
    // check last column
    else if(spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8]){
        spaces[2] == player ? std::cout << "You WIN!" << std::endl : std::cout << "You Lose." << std::endl;
        return true;
    }
    // check left to right diagonal
    else if(spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8]){
        spaces[0] == player ? std::cout << "You WIN!" << std::endl : std::cout << "You Lose." << std::endl;
        return true;
    }
    // check right to left diagonal
    else if(spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6]){
        spaces[2] == player ? std::cout << "You WIN!" << std::endl : std::cout << "You Lose." << std::endl;
        return true;
    }
    else{
        return false;
    }
    
}
bool check_tie(std::vector<char> spaces){
    bool is_nothing = false;
    for(char space : spaces){
        if(space = ' '){
            is_nothing = true;
            break;
        }
    }
    if(is_nothing){
        // not tied yet
        return false;
    }
    else{
        // tied
        std::cout << "You Tied\n";
        return true;
    }
}