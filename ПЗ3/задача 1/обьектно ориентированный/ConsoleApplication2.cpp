#include <iostream>
#include <cmath>

class RightTriangle {
private:
    double legA; 
    double legB; 

public:
 
    RightTriangle(double a, double b) : legA(a), legB(b) {}

 
    double calculateHypotenuse() const {
        return std::sqrt(legA * legA + legB * legB);
    }
};

int main() {
    double a, b;

    std::cout << "Введите катеты a и b: ";
    std::cin >> a >> b;

    RightTriangle triangle(a, b);
    std::cout << "Гипотенуза равна: " << triangle.calculateHypotenuse() << std::endl;

    return 0;
}