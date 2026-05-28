#include <iostream>

class Square{
    private:
        int x;
    public:
    Square(int _x) : x(_x) {}
        void set_x(int _x){ x = _x; }
        int get_x() const { return x; }
        // virtual keyword will prevent parent functions of same name to be called on a child class
        virtual void print() const { std::cout << "Square!\n"; }
};
class Rectangle : public Square{
    private:
        int y;
    public:
    Rectangle(int _x, int _y) : Square(_x) { y = _y; }
        void set_y(int _y) { y = _y; }
        int get_y() const { return y; }
        void print() const { std::cout << "Rectangle!\n"; }
};

void foo(const Square &s){
    std::cout << s.get_x() << std::endl;
    s.print();
}

int main(){
    Square s(8);
    Rectangle rect(2, 4);

    foo(s);
    // permitted because of polymorphism
    // A rectangle is also a square
    foo(rect);

    return 0;
}