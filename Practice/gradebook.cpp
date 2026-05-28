#include <iostream>
#include <vector>
#include <ctime>

class Gradebook{
    private:
        // can't be accessed outside of the class
        std::string student_name;
        std::vector<double> grades;
    
    public:
        void add_grade(double grade){
            grades.push_back(grade);
        }
        double get_average(){
            size_t size = grades.size();
            if(size == 0){
                std::cout << "Nothing here :(" << std::endl;
                return 0;
            }
            else{
                double result = 0.0;
                for(size_t i = 0; i < size; i++){
                    result += grades[i];
                }
                result /= size;
                return result;
            }
        }
        double get_highest(){
            size_t size = grades.size();
            
            if(size == 0){
                std::cout << "Nothing here :(" << std::endl;
                return 0;
            }
            else{
                double temp = grades[0];
                for(size_t i = 1; i < size; i++){
                    if(grades[i] > temp){
                        temp = grades[i];
                    }
                }
                return temp;
            }
        }
        double get_lowest(){
            size_t size = grades.size();
            
            if(size == 0){
                std::cout << "Nothing here :(" << std::endl;
                return 0;
            }
            else{
                double temp = grades[0];
                for(size_t i = 1; i < size; i++){
                    if(grades[i] < temp){
                        temp = grades[i];
                    }
                }
                return temp;
            }
        }
        void print_report(){
            std::cout << "Grade Report for: " << student_name << std::endl;
            std::cout << "Grades: ";
            size_t size = grades.size();
            if(size == 0){
                std::cout << "(No grades yet)" << std::endl;
            }
            else{
                for(int i = 0; i < size; i++){
                    std::cout << grades[i] << "% ";
                }
                std::cout << std::endl;
            }
            std::cout << "Average: " << get_average() << "% " << std::endl;
            std::cout << "Highest: " << get_highest() << "% " << std::endl;
            std::cout << "Lowest: " << get_lowest() << "% " << std::endl;
        }
    Gradebook(const std::string &x){
        student_name = x;
    }

};

int main(){
    using std::cout, std::endl;

    Gradebook student1("Ethan");
    srand(time(NULL));
    for(int i = 0; i < 7; i++){
        double new_grade = (double)rand()/32767*100; // percent
        student1.add_grade(new_grade);
        // cout << new_grade << endl;
    }
    student1.print_report();
    

    return 0;
}