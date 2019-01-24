#include <iostream>

class Point {
public:
    Point(const int x, const int y) : x_(x), y_(y) { }
    
    int get_x() const { return x_; }
    
    int get_y() const { 
        y_++;
        return y_; 
    }
    
private:
    int x_;
    int y_;
};

void ErrorSquare(const int &i) {
//    i = i * i;
    std::cout << i << std::endl;
}


void ErrorSquare2(const int i) {
//    i = i * i;
    std::cout << i << std::endl;
}

int main() {
    std::cout << "begin" << std::endl;
    return 0;
}
