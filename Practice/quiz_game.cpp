#include <iostream>

int main(){
    using std::cout, std::cin, std::endl;
    std::string questions[] = {
        "1. What year was C++ created?: ", 
        "2. Who invented C++?: ",
        "3. What is the predecessor of C++?: ",
        "4. Is the Earth flat?: "
    };
    std::string options[][4] = {
        {"A. 1969", "B. 1975", "C. 1985", "D. 2015"},
        {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerberg"},
        {"A. C", "B. C+", "C. C--", "D. B++"},
        {"A. Yes", "B. No", "C. Sometimes", "D. Uhhhh...."},
    };
    char answerKey[] = {'C', 'B', 'A', 'B'};

    const int SIZE = sizeof(questions)/sizeof(questions[0]);
    // const int COLS = sizeof(options[0])/sizeof(options[0][0]);
    char guess;
    int score = 0;

    for(int i = 0; i < SIZE; i++){
        cout << "***********************\n";
        cout << questions[i] << endl;
        cout << "***********************\n";
        
        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            cout << "\t" << options[i][j] << endl;
        }

        cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            cout << "CORRECT" << endl;
            score++;
        }
        else{
            cout << "INCORRECT" << endl;
        }
    }
    cout << "Your score is: " << score << "/" << SIZE << endl;
    return 0;
}